#include "../include/Processus.h"

Processus::Processus(nodes::INoeud* noeud)
{
	this->depart = noeud;
}

void Processus::executer(Contexte contexte) const
{
	auto current = this->depart;
	
	while (current != nullptr)
		current = current->executer(contexte);
}
