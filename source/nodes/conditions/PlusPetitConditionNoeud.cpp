#include "../../../include/nodes/conditions/PlusPetitConditionNoeud.h"

bool nodes::conditions::PlusPetitConditionNoeud::executerCondition(Contexte& contexte)
{
	if (!this->cleGauche.has_value())
		return false;

	if (!this->cleDroite.has_value())
		return true;

	const auto leftKey = this->cleGauche.value();
	const auto rightKey = this->cleDroite.value();

	if (!contexte.contientCle(leftKey))
		return false;

	if (!contexte.contientCle(rightKey))
		return true;

	const auto leftValue = contexte.obtenirValeur(leftKey);
	const auto rightValue = contexte.obtenirValeur(rightKey);

	return leftValue < rightValue;
}

nodes::conditions::PlusPetitConditionNoeud::PlusPetitConditionNoeud()
{
	this->cleDroite = std::nullopt;
	this->cleGauche = std::nullopt;
}

void nodes::conditions::PlusPetitConditionNoeud::configurer(const nlohmann::basic_json<>& json)
{
	ConditionNoeud::configurer(json);
	
	this->cleDroite = json.at("right").get<std::string>();
	this->cleGauche = json.at("left").get<std::string>();
}
