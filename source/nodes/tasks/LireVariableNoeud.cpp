#include "../../../include/nodes/tasks/LireVariableNoeud.h"

#include <iostream>

nodes::tasks::LireVariableNoeud::LireVariableNoeud()
{
	this->cle = std::nullopt;
}

nodes::INoeud* nodes::tasks::LireVariableNoeud::executer(Contexte& contexte)
{
	if (!this->cle.has_value())
		throw std::runtime_error("No key was assigned.");

	const auto key = this->cle.value();

	if (contexte.contientCle(key))
	{
		const auto value = contexte.obtenirValeur(key);

		std::cout << value << std::endl;
	}
	else
		std::cout << "No value found for '" + key + "'." << std::endl;

	return TacheNoeud::executer(contexte);
}

void nodes::tasks::LireVariableNoeud::configurer(const nlohmann::basic_json<>& json)
{
	TacheNoeud::configurer(json);
	this->cle = json.at("name").get<std::string>();
}
