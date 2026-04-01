#include "../../../include/nodes/tasks/EcrireVariableNoeud.h"

#include <stdexcept>

nodes::tasks::EcrireVariableNoeud::EcrireVariableNoeud() : TacheNoeud()
{
}

nodes::INoeud* nodes::tasks::EcrireVariableNoeud::executer(Contexte& contexte)
{
	contexte.mettreValeur("aaa", 100);
	throw std::runtime_error("Not implemented");
}
