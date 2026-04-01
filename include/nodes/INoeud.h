#ifndef INC_8INF334_TP3_INOEUD_H
#define INC_8INF334_TP3_INOEUD_H

#include "../Contexte.h"

namespace nodes
{
	class INoeud
	{
	public:
		virtual ~INoeud() = default;

		/// Executes this node
		[[nodiscard]] virtual INoeud* executer(Contexte& contexte) = 0;
	};
}

#endif //INC_8INF334_TP3_INOEUD_H
