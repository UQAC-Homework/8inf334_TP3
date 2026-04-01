#include "../../include/factories/ProcessusFactory.h"

#include "../../library/json.hpp"

Processus factories::ProcessusFactory::creer(const nlohmann::basic_json<>& json)
{
	constexpr auto START_KEY = "start";
	constexpr auto NODES_KEY = "nodes";

	const auto& nodesProp = json.at(NODES_KEY);

	if (!nodesProp.is_object())
		throw std::invalid_argument("The property '" + std::string(NODES_KEY) + "' must be an object.");

	// Load nodes
	auto idToNode = std::unordered_map<std::string, nodes::Noeud*>();

	for (const auto& nodeProp : nodesProp.items())
	{
		const auto& id = nodeProp.key();

		// Load node
		nodes::Noeud* node = nullptr;

		idToNode.insert({id, node});
	}

	// Get start
	if (!json.contains(START_KEY))
		throw std::invalid_argument("The property '" + std::string(START_KEY) + "' does not exist.");

	const auto startProp = json.at(START_KEY);

	if (!startProp.is_string())
		throw std::invalid_argument("The property '" + std::string(START_KEY) + "' must be a string.");

	const auto startNode = idToNode.find(startProp);

	if (startNode == idToNode.end() || startNode->second == nullptr)
		throw std::runtime_error("Failed to find the starting node '" + std::string(startProp) + "'.");

	// Create workflow
	return Processus(startNode->second);
}
