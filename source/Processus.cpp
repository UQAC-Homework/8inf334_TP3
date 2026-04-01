#include "../include/Processus.h"

Processus::Processus()
{
	this->depart = nullptr;
}

void Processus::mettreDepart(nodes::INoeud* noeud)
{
	this->depart = noeud;
}

void Processus::executer(Contexte contexte) const
{
	auto current = this->depart;
	
	while (current != nullptr)
		current = current->executer(contexte);
}
