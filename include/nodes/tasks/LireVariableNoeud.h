#ifndef INC_8INF334_TP3_LIREVARIABLENOEUD_H
#define INC_8INF334_TP3_LIREVARIABLENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class LireVariableNoeud : public TacheNoeud
	{
	public:
		LireVariableNoeud();

		INoeud* executer(Contexte& contexte) override;
	};
}

#endif //INC_8INF334_TP3_LIREVARIABLENOEUD_H
