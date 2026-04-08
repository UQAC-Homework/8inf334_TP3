#include "../../../include/nodes/tasks/AfficherTexteNoeud.h"

#include <iostream>

nodes::tasks::AfficherTexteNoeud::AfficherTexteNoeud()
{
	this->texte = std::nullopt;
}

nodes::INoeud* nodes::tasks::AfficherTexteNoeud::executer(Contexte& contexte)
{
	std::string text;

	if (this->texte.has_value())
		text = this->texte.value();

	std::cout << text << std::endl;
	return TacheNoeud::executer(contexte);
}

void nodes::tasks::AfficherTexteNoeud::configurer(const nlohmann::basic_json<>& json)
{
	TacheNoeud::configurer(json);

	this->texte = json.at("text").get<std::string>();
}
