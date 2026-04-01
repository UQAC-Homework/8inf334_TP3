#include "../../../include/nodes/tasks/AssignerVariableNoeud.h"

#include <stdexcept>

nodes::tasks::AssignerVariableNoeud::AssignerVariableNoeud(INoeud* noeud) : TacheNoeud(noeud)
{
}

nodes::INoeud* nodes::tasks::AssignerVariableNoeud::executer(Contexte& contexte)
{
	contexte.retirerCle("aaa");
	throw std::runtime_error("Not implemented");
}
