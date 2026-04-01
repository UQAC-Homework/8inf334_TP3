#include "../../../include/nodes/tasks/EffacerVariableNoeud.h"

#include <stdexcept>

nodes::tasks::EffacerVariableNoeud::EffacerVariableNoeud()
{
}

nodes::INoeud* nodes::tasks::EffacerVariableNoeud::executer(Contexte& contexte)
{
	contexte.retirerCle("aaa");
	throw std::runtime_error("Not implemented");
}
