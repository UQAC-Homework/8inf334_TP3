#include "../../include/nodes/DepartNoeud.h"

nodes::DepartNoeud::DepartNoeud()
{
	this->enfantId = std::nullopt;
	this->enfant = nullptr;
}

void nodes::DepartNoeud::executer(Contexte& contexte)
{
	if (this->enfant == nullptr)
		return;

	this->enfant->executer(contexte);
}

void nodes::DepartNoeud::configurer(const nlohmann::basic_json<>& json)
{
	this->enfantId = json.at("next").get<std::string>();
}

void nodes::DepartNoeud::lier(const std::unordered_map<std::string, INoeud*>& noeuds)
{
	if (!this->enfantId.has_value())
		throw std::runtime_error("No ID was assigned for the next node.");

	const auto id = this->enfantId.value();
	const auto enfantIt = noeuds.find(id);

	if (enfantIt == noeuds.end())
		throw std::runtime_error("Failed to find the node '" + id + "'.");

	this->enfant = enfantIt->second;
}
