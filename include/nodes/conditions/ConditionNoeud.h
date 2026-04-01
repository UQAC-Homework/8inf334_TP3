#ifndef INC_8INF334_TP3_CONDITIONNOEUD_H
#define INC_8INF334_TP3_CONDITIONNOEUD_H
#include "../INoeud.h"

namespace nodes::conditions
{
	class ConditionNoeud : public INoeud
	{
	protected:
		INoeud* enfantVrai;
		INoeud* enfantFaux;
	public:
		ConditionNoeud(INoeud* enfantVrai, INoeud* enfantFaux);
	};
}


#endif //INC_8INF334_TP3_CONDITIONNOEUD_H
