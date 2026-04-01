#ifndef INC_8INF334_TP3_TACHENOEUD_H
#define INC_8INF334_TP3_TACHENOEUD_H
#include "../INoeud.h"

namespace nodes::tasks
{
	class TacheNoeud : public INoeud
	{
	protected:
		INoeud* enfant;

	public:
		TacheNoeud(INoeud* noeud);
	};
}


#endif //INC_8INF334_TP3_TACHENOEUD_H
