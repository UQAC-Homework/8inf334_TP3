#include "../../../include/nodes/conditions/ConditionNoeud.h"

nodes::conditions::ConditionNoeud::ConditionNoeud()
{
	this->enfantVrai = nullptr;
	this->enfantVraiId = std::nullopt;

	this->enfantFaux = nullptr;
	this->enfantFauxId = std::nullopt;
}

nodes::INoeud* nodes::conditions::ConditionNoeud::executer(Contexte& contexte)
{
	const bool result = this->executerCondition(contexte);

	return result ? this->enfantVrai : this->enfantFaux;
}

void nodes::conditions::ConditionNoeud::configurer(const nlohmann::basic_json<>& json)
{
	this->enfantVraiId = json.at("next_true").get<std::string>();
	this->enfantFauxId = json.at("next_false").get<std::string>();
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
