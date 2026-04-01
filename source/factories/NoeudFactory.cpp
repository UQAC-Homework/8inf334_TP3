#include "../../include/factories/NoeudFactory.h"

#include "../../include/nodes/tasks/EcrireVariableNoeud.h"

std::unique_ptr<nodes::INoeud> factories::NoeudFactory::creer(const nlohmann::basic_json<>& json)
{
	const auto type = json.at("type").get<std::string>();

	if (type == "start")
	{
		// ...
	}

	if (type == "end")
	{
		// ...
	}

	if (type == "assign")
		return std::make_unique<nodes::tasks::EcrireVariableNoeud>();

	if (type == "clear")
	{
		// ...
	}

	throw std::runtime_error("Failed to create a node for the type '" + type + "'.");
}
