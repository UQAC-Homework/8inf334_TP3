#include "../include/Processus.h"

Processus::Processus(nodes::Noeud* noeud)
{
	this->depart = noeud;
	this->contexte = {};
}

void Processus::executer()
{
	auto current = this->depart;
	
	while (current != nullptr)
		current = current->executer();
}
