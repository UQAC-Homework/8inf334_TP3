#include "../../../include/nodes/conditions/EgalConditionNoeud.h"

bool nodes::conditions::EgalConditionNoeud::executerCondition(Contexte& contexte)
{
	if (this->cles.size() < 2)
		return true;

	const auto globalValue = contexte.obtenirValeur(this->cles.at(0));

	for (auto it = this->cles.begin() + 1; it != this->cles.end(); ++it)
	{
		const auto& key = *it;

		if (!contexte.contientCle(key))
			return false;

		auto value = contexte.obtenirValeur(key);

		if (value != globalValue)
			return false;
	}

	return true;
}

nodes::conditions::EgalConditionNoeud::EgalConditionNoeud()
{
	this->cles = {};
}

void nodes::conditions::EgalConditionNoeud::configurer(const nlohmann::basic_json<>& json)
{
	constexpr auto NAMES_KEY = "names";

	ConditionNoeud::configurer(json);

	const auto& namesProp = json.at(NAMES_KEY);

	if (!namesProp.is_array())
		throw std::invalid_argument("The property '" + std::string(NAMES_KEY) + "' must be an array.");
	
	for (const auto& item : namesProp.items())
		this->cles.push_back(item.value().get<std::string>());
}
