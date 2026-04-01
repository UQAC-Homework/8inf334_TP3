#include "../../../include/nodes/tasks/TacheNoeud.h"

nodes::tasks::TacheNoeud::TacheNoeud(Noeud* noeud)
{
	this->enfant = noeud;
}

nodes::Noeud* nodes::tasks::TacheNoeud::prochain() const
{
	return this->enfant;
}
