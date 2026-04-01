#include "../../../include/nodes/tasks/AssignerVariableNoeud.h"

#include <stdexcept>

nodes::tasks::AssignerVariableNoeud::AssignerVariableNoeud(Noeud* noeud) : TacheNoeud(noeud)
{
}

nodes::Noeud* nodes::tasks::AssignerVariableNoeud::executer()
{
	throw std::runtime_error("Not implemented");
}
