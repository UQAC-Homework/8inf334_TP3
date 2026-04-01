#include "../../include/nodes/DepartNoeud.h"

nodes::DepartNoeud::DepartNoeud()
{
}

nodes::INoeud* nodes::DepartNoeud::executer(Contexte& contexte)
{
	return this->enfant;
}
