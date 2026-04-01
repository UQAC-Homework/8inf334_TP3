#ifndef INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
#define INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class AssignerVariableNoeud : public TacheNoeud
	{
	public:
		AssignerVariableNoeud(INoeud* noeud);

		INoeud* executer(Contexte& contexte) override;
	};
}


#endif //INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
