#ifndef INC_8INF334_TP3_CONDITIONNOEUD_H
#define INC_8INF334_TP3_CONDITIONNOEUD_H
#include "../Noeud.h"

namespace nodes::conditions
{
	class ConditionNoeud : public Noeud
	{
	protected:
		Noeud* enfantVrai;
		Noeud* enfantFaux;
	public:
		ConditionNoeud(Noeud* enfantVrai, Noeud* enfantFaux);
	};
}


#endif //INC_8INF334_TP3_CONDITIONNOEUD_H
