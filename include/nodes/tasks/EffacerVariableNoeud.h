#ifndef INC_8INF334_TP3_EFFACERVARIABLENOEUD_H
#define INC_8INF334_TP3_EFFACERVARIABLENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class EffacerVariableNoeud : public TacheNoeud
	{
	public:
		EffacerVariableNoeud();

		INoeud* executer(Contexte& contexte) override;
	};
}

#endif //INC_8INF334_TP3_EFFACERVARIABLENOEUD_H
