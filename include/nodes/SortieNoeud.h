#ifndef INC_8INF334_TP3_SORTIENOEUD_H
#define INC_8INF334_TP3_SORTIENOEUD_H
#include "INoeud.h"

namespace nodes
{
	class SortieNoeud : public INoeud
	{
	public:
		SortieNoeud();

		INoeud* executer(Contexte& contexte) override;
	};
}

#endif //INC_8INF334_TP3_SORTIENOEUD_H
