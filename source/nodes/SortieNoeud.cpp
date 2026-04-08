#include "../../include/nodes/SortieNoeud.h"

nodes::SortieNoeud::SortieNoeud()
{
}

nodes::INoeud* nodes::SortieNoeud::executer(Contexte& contexte)
{
	return nullptr;
}

void nodes::SortieNoeud::configurer(const nlohmann::basic_json<>& json)
{
}

void nodes::SortieNoeud::lier(const std::unordered_map<std::string, INoeud*>& noeuds)
{
}
