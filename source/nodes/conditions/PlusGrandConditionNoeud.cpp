#include "../../../include/nodes/conditions/PlusGrandConditionNoeud.h"

bool nodes::conditions::PlusGrandConditionNoeud::executerCondition(Contexte& contexte)
{
	if (!this->cleGauche.has_value())
		return true;

	if (!this->cleDroite.has_value())
		return false;

	const auto leftKey = this->cleGauche.value();
	const auto rightKey = this->cleDroite.value();

	if (!contexte.contientCle(leftKey))
		return true;

	if (!contexte.contientCle(rightKey))
		return false;

	const auto leftValue = contexte.obtenirValeur(leftKey);
	const auto rightValue = contexte.obtenirValeur(rightKey);

	return leftValue > rightValue;
}

nodes::conditions::PlusGrandConditionNoeud::PlusGrandConditionNoeud()
{
	this->cleDroite = std::nullopt;
	this->cleGauche = std::nullopt;
}

void nodes::conditions::PlusGrandConditionNoeud::configurer(const nlohmann::basic_json<>& json)
{
	ConditionNoeud::configurer(json);
	
	this->cleDroite = json.at("right").get<std::string>();
	this->cleGauche = json.at("left").get<std::string>();
}
