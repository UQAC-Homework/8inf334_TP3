#include "../include/Processus.h"

#include <stdexcept>

Processus::Processus()
{
	this->depart = nullptr;
}

void Processus::mettreDepart(const std::string& id)
{
	const auto node = this->nodes.find(id);

	if (node == this->nodes.end())
		throw std::runtime_error("Failed to find the node '" + id + "'.");

	this->depart = node->second;
}

void Processus::executer(Contexte contexte) const
{
	auto current = this->depart;

	while (current != nullptr)
		current = current->executer(contexte);
}

void Processus::ajouterNoeud(const std::string& id, nodes::INoeud* node)
{
	this->nodes.insert_or_assign(id, node);
}
