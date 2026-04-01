#include "../../../include/nodes/tasks/AssignerVariableNoeud.h"

#include <stdexcept>

nodes::tasks::AssignerVariableNoeud::AssignerVariableNoeud(Noeud* noeud) : TacheNoeud(noeud)
{
}

void nodes::tasks::AssignerVariableNoeud::execute()
{
	throw std::runtime_error("Not implemented");
}
