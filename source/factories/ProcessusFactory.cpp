#include "../../include/factories/ProcessusFactory.h"

#include <fstream>

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

		auto node = NoeudFactory::creer(nodeProp.value());

		workflow.ajouterNoeud(id, node);
	}

	// Get start
	const auto startId = json.at(START_KEY).get<std::string>();
	workflow.mettreDepart(startId);

	return workflow;
}

Processus factories::ProcessusFactory::creerDepuisFichier(const std::string& chemin)
{
	if (!std::filesystem::exists(chemin))
		throw std::runtime_error("File at '" + chemin + "' does not exist.");

	std::ifstream file(chemin);
	const std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	auto json = nlohmann::json::parse(content);

	return creer(json);
}
