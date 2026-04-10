#include "../../../include/nodes/tasks/EffacerVariableNoeud.h"

#include "../../../include/Enregistreur.h"

nodes::tasks::EffacerVariableNoeud::EffacerVariableNoeud()
{
	this->cle = std::nullopt;
}

void nodes::tasks::EffacerVariableNoeud::executer(Contexte& contexte)
{
	if (!this->cle.has_value())
		throw std::runtime_error("No key was assigned.");

	const auto key = this->cle.value();

	Enregistreur::enregistrer("Clearing '" + key + "'.");
	contexte.retirerCle(key);

	return TacheNoeud::executer(contexte);
}

void nodes::tasks::EffacerVariableNoeud::configurer(const nlohmann::basic_json<>& json)
{
	TacheNoeud::configurer(json);
	this->cle = json.at("name").get<std::string>();
}
