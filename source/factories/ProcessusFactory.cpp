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
	Processus workflow;

	for (const auto& nodeProp : nodesProp.items())
	{
		const auto& id = nodeProp.key();

		nodes::INoeud* node = NoeudFactory::creer(nodeProp.value());

		workflow.ajouterNoeud(id, node);
	}

	// Get start
	const auto startId = json.at(START_KEY).get<std::string>();
	workflow.mettreDepart(startId);

	return workflow;
}
