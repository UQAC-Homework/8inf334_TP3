#include "../../../include/nodes/tasks/EffacerVariableNoeud.h"

#include <stdexcept>

nodes::tasks::EffacerVariableNoeud::EffacerVariableNoeud()
{
}

nodes::INoeud* nodes::tasks::EffacerVariableNoeud::executer(Contexte& contexte)
{
	contexte.retirerCle("aaa");
	return TacheNoeud::executer(contexte);
}
