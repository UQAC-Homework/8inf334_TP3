#include "../../../include/nodes/conditions/ConditionNoeud.h"

#include "../../../include/strategies/EgalStrategie.h"
#include "../../../include/strategies/PlusGrandStrategie.h"
#include "../../../include/strategies/PlusPetitStrategie.h"

nodes::conditions::ConditionNoeud::ConditionNoeud(const std::string& type)
{
	this->enfantVrai = nullptr;
	this->enfantVraiId = std::nullopt;

	this->enfantFaux = nullptr;
	this->enfantFauxId = std::nullopt;

	this->type = type;
	this->strategie = nullptr;
}

nodes::INoeud* nodes::conditions::ConditionNoeud::executer(Contexte& contexte)
{
	if (this->strategie == nullptr)
		return this->enfantVrai;

	const bool result = this->strategie->execute(contexte);

	return result ? this->enfantVrai : this->enfantFaux;
}

void nodes::conditions::ConditionNoeud::configurer(const nlohmann::basic_json<>& json)
{
	this->enfantVraiId = json.at("next_true").get<std::string>();
	this->enfantFauxId = json.at("next_false").get<std::string>();
	
	const auto leftKey = json.at("left").get<std::string>();
	const auto rightKey = json.at("right").get<std::string>();

	if (type == "equal")
		this->strategie = new strategies::EgalStrategie(leftKey, rightKey);
	else if (type == "greater")
		this->strategie = new strategies::PlusGrandStrategie(leftKey, rightKey);
	else if (type == "less")
		this->strategie = new strategies::PlusPetitStrategie(leftKey, rightKey);
}

void nodes::conditions::ConditionNoeud::lier(const std::unordered_map<std::string, INoeud*>& noeuds)
{
	if (!this->enfantVraiId.has_value())
		throw std::runtime_error("No ID was assigned for the next 'TRUE' node.");

	if (!this->enfantFauxId.has_value())
		throw std::runtime_error("No ID was assigned for the next 'FALSE' node.");

	const auto trueId = this->enfantVraiId.value();
	const auto falseId = this->enfantFauxId.value();

	const auto trueIt = noeuds.find(trueId);
	const auto falseIt = noeuds.find(falseId);

	if (trueIt == noeuds.end())
		throw std::runtime_error("Failed to find the node '" + trueId + "'.");

	if (falseIt == noeuds.end())
		throw std::runtime_error("Failed to find the node '" + falseId + "'.");

	this->enfantVrai = trueIt->second;
	this->enfantFaux = falseIt->second;
}
