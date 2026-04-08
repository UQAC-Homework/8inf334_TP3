#include "../../../include/nodes/tasks/TacheNoeud.h"

nodes::tasks::TacheNoeud::TacheNoeud()
{
	this->enfantId = std::nullopt;
	this->enfant = nullptr;
}

nodes::INoeud* nodes::tasks::TacheNoeud::executer(Contexte& contexte)
{
	return this->enfant;
}

void nodes::tasks::TacheNoeud::configurer(const nlohmann::basic_json<>& json)
{
	this->enfantId = json.at("next").get<std::string>();
}

void nodes::tasks::TacheNoeud::lier(const std::unordered_map<std::string, INoeud*>& noeuds)
{
	if (!this->enfantId.has_value())
		throw std::runtime_error("No ID was assigned for the next node.");

	const auto id = this->enfantId.value();
	const auto enfantIt = noeuds.find(id);

	if (enfantIt == noeuds.end())
		throw std::runtime_error("Failed to find the node '" + id + "'.");

	this->enfant = enfantIt->second;
}
