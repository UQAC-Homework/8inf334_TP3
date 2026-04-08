#include "../../../include/nodes/tasks/EffacerVariableNoeud.h"

nodes::tasks::EffacerVariableNoeud::EffacerVariableNoeud()
{
	this->cle = std::nullopt;
}

nodes::INoeud* nodes::tasks::EffacerVariableNoeud::executer(Contexte& contexte)
{
	if (this->cle.has_value())
	{
		const auto key = this->cle.value();
		contexte.retirerCle(key);
	}

	return TacheNoeud::executer(contexte);
}

void nodes::tasks::EffacerVariableNoeud::configurer(const nlohmann::basic_json<>& json)
{
	TacheNoeud::configurer(json);
	this->cle = json.at("name").get<std::string>();
}
