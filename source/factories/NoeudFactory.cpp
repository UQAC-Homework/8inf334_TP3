#include "../../include/factories/NoeudFactory.h"

#include "../../include/nodes/DepartNoeud.h"
#include "../../include/nodes/SortieNoeud.h"
#include "../../include/nodes/tasks/EcrireVariableNoeud.h"
#include "../../include/nodes/tasks/EffacerVariableNoeud.h"
#include "../../include/nodes/tasks/LireVariableNoeud.h"

std::unique_ptr<nodes::INoeud> factories::NoeudFactory::creer(const nlohmann::basic_json<>& json)
{
	const auto type = json.at("type").get<std::string>();

	if (type == "start")
		return std::make_unique<nodes::DepartNoeud>();

	if (type == "end")
		return std::make_unique<nodes::SortieNoeud>();

	if (type == "assign")
		return std::make_unique<nodes::tasks::EcrireVariableNoeud>();
	
	if (type == "read")
		return std::make_unique<nodes::tasks::LireVariableNoeud>();

	if (type == "clear")
		return std::make_unique<nodes::tasks::EffacerVariableNoeud>();

	throw std::runtime_error("Failed to create a node for the type '" + type + "'.");
}
