#ifndef INC_8INF334_TP3_TACHENOEUD_H
#define INC_8INF334_TP3_TACHENOEUD_H
#include "../Noeud.h"

namespace nodes::tasks
{
	class TacheNoeud : public Noeud
	{
	protected:
		Noeud* enfant;	
	public:
		TacheNoeud(Noeud* noeud);

		[[nodiscard]] Noeud* prochain() const override;
	};
}


#endif //INC_8INF334_TP3_TACHENOEUD_H
