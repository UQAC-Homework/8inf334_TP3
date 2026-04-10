#include "../../../include/nodes/tasks/EcrireVariableNoeud.h"

#include "../../../include/Enregistreur.h"

nodes::tasks::EcrireVariableNoeud::EcrireVariableNoeud()
{
	this->cle = std::nullopt;
	this->valeur = std::nullopt;
}

nodes::INoeud* nodes::tasks::EcrireVariableNoeud::executer(Contexte& contexte)
{
	if (!this->cle.has_value())
		throw std::runtime_error("No key was assigned.");

	if (!this->valeur.has_value())
		throw std::runtime_error("No value was assigned.");

	const auto key = this->cle.value();
	const auto value = this->valeur.value();

	Enregistreur::enregistrer("Writing '" + std::to_string(value) + "' to '" + key + "'.");
	contexte.mettreValeur(this->cle.value(), this->valeur.value());
	return TacheNoeud::executer(contexte);
}

void nodes::tasks::EcrireVariableNoeud::configurer(const nlohmann::basic_json<>& json)
{
	TacheNoeud::configurer(json);

	this->cle = json.at("name").get<std::string>();
	this->valeur = json.at("value").get<std::size_t>();
}
