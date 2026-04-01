#include "../../include/factories/NoeudFactory.h"

#include "../../include/nodes/tasks/AssignerVariableNoeud.h"

nodes::INoeud* factories::NoeudFactory::creer(const nlohmann::basic_json<>& json)
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
	{
		// ...
	}

	if (type == "read")
	{
		// ...
	}

	if (type == "clear")
	{
		// ...
	}

	return nullptr;
	throw std::runtime_error("Failed to create a node for the type '" + type + "'.");
}
