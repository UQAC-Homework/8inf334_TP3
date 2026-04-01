#include "../../include/factories/ProcessusFactory.h"

#include "../../include/factories/NoeudFactory.h"
#include "../../library/json.hpp"

Processus factories::ProcessusFactory::creer(const nlohmann::basic_json<>& json)
{
	constexpr auto START_KEY = "start";
	constexpr auto NODES_KEY = "nodes";

	const auto& nodesProp = json.at(NODES_KEY);

	if (!nodesProp.is_object())
		throw std::invalid_argument("The property '" + std::string(NODES_KEY) + "' must be an object.");

	// Load nodes
	auto idToNode = std::unordered_map<std::string, nodes::INoeud*>();

	for (const auto& nodeProp : nodesProp.items())
	{
		const auto& id = nodeProp.key();

		nodes::INoeud* node = NoeudFactory::creer(nodeProp.value());

		idToNode.insert({id, node});
	}

	// Get start
	const auto startId = json.at(START_KEY).get<std::string>();
	const auto startNode = idToNode.find(startId);

	if (startNode == idToNode.end())
		throw std::runtime_error("Failed to find the starting node '" + startId + "'.");

	// Create workflow
	Processus workflow;
	workflow.mettreDepart(startNode->second);

	return workflow;
}
