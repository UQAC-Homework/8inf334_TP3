#include "../include/Processus.h"

Processus::Processus(nodes::Noeud* noeud)
{
	this->depart = noeud;
}

void Processus::executer()
{
	this->depart->execute();
}
