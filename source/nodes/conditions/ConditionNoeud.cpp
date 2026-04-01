#include "../../../include/nodes/conditions/ConditionNoeud.h"

nodes::conditions::ConditionNoeud::ConditionNoeud(Noeud* enfantVrai, Noeud* enfantFaux)
{
	this->enfantVrai = enfantVrai;
	this->enfantFaux = enfantFaux;
}
