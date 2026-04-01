#ifndef INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
#define INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class AssignerVariableNoeud : public TacheNoeud
	{
	public:
		AssignerVariableNoeud(Noeud* noeud);

		void execute() override;
	};
}


#endif //INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
