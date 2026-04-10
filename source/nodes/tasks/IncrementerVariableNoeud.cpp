#include "../../../include/nodes/tasks/IncrementerVariableNoeud.h"

nodes::tasks::IncrementerVariableNoeud::IncrementerVariableNoeud()
{
	this->cle = std::nullopt;
	this->ajout = std::nullopt;
}

void nodes::tasks::IncrementerVariableNoeud::executer(Contexte& contexte)
{
	if (!this->cle.has_value())
		throw std::runtime_error("No key was assigned.");

	if (!this->ajout.has_value())
		throw std::runtime_error("No increment was assigned.");

	const auto key = this->cle.value();
	
	if (contexte.contientCle(key))
	{
		const auto added = this->ajout.value();
		const auto value = contexte.obtenirValeur(key);
		
		contexte.mettreValeur(key, value + added);
	}
	
	return TacheNoeud::executer(contexte);
}

void nodes::tasks::IncrementerVariableNoeud::configurer(const nlohmann::basic_json<>& json)
{
	TacheNoeud::configurer(json);
	
	this->cle = json.at("name").get<std::string>();
	this->ajout = json.at("value").get<std::size_t>();
}
