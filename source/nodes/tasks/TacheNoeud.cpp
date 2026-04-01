#include "../../../include/nodes/tasks/TacheNoeud.h"

nodes::tasks::TacheNoeud::TacheNoeud()
{
}

nodes::INoeud* nodes::tasks::TacheNoeud::executer(Contexte& contexte)
{
	return this->enfant;
}
