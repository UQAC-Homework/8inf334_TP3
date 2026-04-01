#include "../include/Processus.h"

Processus::Processus(nodes::Noeud* noeud, const Contexte& contexte = {})
{
	this->depart = noeud;
	this->contexte = contexte;
}

void Processus::executer()
{
	auto current = this->depart;
	
	while (current != nullptr)
		current = current->executer();
}
