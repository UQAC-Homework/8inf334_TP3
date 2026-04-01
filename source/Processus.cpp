#include "../include/Processus.h"

Processus::Processus(nodes::Noeud* noeud)
{
	this->depart = noeud;
}

void Processus::executer()
{
	auto current = this->depart;
	
	while (current != nullptr)
	{
		current->executer();
		current = current->prochain();
	}
}
