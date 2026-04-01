#ifndef INC_8INF334_TP3_NOEUDFACTORY_H
#define INC_8INF334_TP3_NOEUDFACTORY_H
#include "../../library/json.hpp"
#include "../nodes/INoeud.h"

namespace factories
{
	class NoeudFactory
	{
	public:
		/// Creates a node from the given object
		static nodes::INoeud* creer(const nlohmann::basic_json<>& json);
	};
}

#endif //INC_8INF334_TP3_NOEUDFACTORY_H
