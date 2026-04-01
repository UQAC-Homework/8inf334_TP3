#ifndef INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
#define INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class EcrireVariableNoeud : public TacheNoeud
	{
	public:
		EcrireVariableNoeud();

		INoeud* executer(Contexte& contexte) override;
	};
}


#endif //INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
