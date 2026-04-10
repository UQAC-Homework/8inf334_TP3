#ifndef INC_8INF334_TP3_STRATEGY_H
#define INC_8INF334_TP3_STRATEGY_H
#include "../Contexte.h"

namespace strategies
{
	class IStrategie
	{
	public:
		virtual ~IStrategie() = default;
		
		/// Executes the strategy
	 	[[nodiscard]] virtual bool execute(Contexte& contexte) = 0;
	};
}


#endif //INC_8INF334_TP3_STRATEGY_H
