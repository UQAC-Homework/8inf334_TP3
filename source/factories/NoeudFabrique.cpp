#include "../../include/factories/NoeudFabrique.h"

#include "../../include/nodes/DepartNoeud.h"
#include "../../include/nodes/SortieNoeud.h"
#include "../../include/nodes/conditions/EgalConditionNoeud.h"
#include "../../include/nodes/conditions/PlusGrandConditionNoeud.h"
#include "../../include/nodes/conditions/PlusPetitConditionNoeud.h"
#include "../../include/nodes/tasks/AfficherTexteNoeud.h"
#include "../../include/nodes/tasks/EcrireVariableNoeud.h"
#include "../../include/nodes/tasks/EffacerVariableNoeud.h"
#include "../../include/nodes/tasks/LireVariableNoeud.h"

std::unique_ptr<nodes::INoeud> factories::NoeudFabrique::creerVide(const std::string& type)
{
	if (type == "start")
		return std::make_unique<nodes::DepartNoeud>();

	if (type == "end")
		return std::make_unique<nodes::SortieNoeud>();

	if (type == "write")
		return std::make_unique<nodes::tasks::EcrireVariableNoeud>();

	if (type == "read")
		return std::make_unique<nodes::tasks::LireVariableNoeud>();

	if (type == "erase")
		return std::make_unique<nodes::tasks::EffacerVariableNoeud>();

	if (type == "equal")
		return std::make_unique<nodes::conditions::EgalConditionNoeud>();

	if (type == "less")
		return std::make_unique<nodes::conditions::PlusPetitConditionNoeud>();

	if (type == "greater")
		return std::make_unique<nodes::conditions::PlusGrandConditionNoeud>();

	if (type == "print")
		return std::make_unique<nodes::tasks::AfficherTexteNoeud>();

	throw std::runtime_error("Failed to create a node for the type '" + type + "'.");
}

std::unique_ptr<nodes::INoeud> factories::NoeudFabrique::creer(const nlohmann::basic_json<>& json)
{
	constexpr auto PARAMETERS_KEY = "parameters";

	const auto type = json.at("type").get<std::string>();

	auto node = creerVide(type);

	const auto paramsProp = json.at(PARAMETERS_KEY);

	if (!paramsProp.is_object())
		throw std::invalid_argument("The property '" + std::string(PARAMETERS_KEY) + "' must be an object.");

	node->configurer(paramsProp);

	return node;
}
