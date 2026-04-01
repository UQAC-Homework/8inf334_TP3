#ifndef INC_8INF334_TP3_DEPARTNOEUD_H
#define INC_8INF334_TP3_DEPARTNOEUD_H
#include "INoeud.h"

namespace nodes
{
	class DepartNoeud : public INoeud
	{
	private:
		INoeud* enfant;

	public:
		DepartNoeud();

		INoeud* executer(Contexte& contexte) override;
	};
}


#endif //INC_8INF334_TP3_DEPARTNOEUD_H
