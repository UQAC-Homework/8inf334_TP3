#include "../../../include/nodes/conditions/ConditionNoeud.h"

nodes::conditions::ConditionNoeud::ConditionNoeud(INoeud* enfantVrai, INoeud* enfantFaux)
{
	this->enfantVrai = enfantVrai;
	this->enfantFaux = enfantFaux;
}
