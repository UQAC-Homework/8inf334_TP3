#include "../../../include/nodes/tasks/LireVariableNoeud.h"

#include <stdexcept>

nodes::tasks::LireVariableNoeud::LireVariableNoeud()
{
}

nodes::INoeud* nodes::tasks::LireVariableNoeud::executer(Contexte& contexte)
{
	auto c = contexte.obtenirValeur("aaa");
	throw std::runtime_error("Not implemented");
}
