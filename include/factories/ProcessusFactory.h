#ifndef INC_8INF334_TP3_PROCESSUSFACTORY_H
#define INC_8INF334_TP3_PROCESSUSFACTORY_H

#include "../Processus.h"
#include "../../library/json.hpp"

namespace factories
{
	class ProcessusFactory
	{
	public:
		/// Creates a new workflow from the given JSON
		static Processus* creer(const nlohmann::basic_json<>& json);
	};
}

#endif //INC_8INF334_TP3_PROCESSUSFACTORY_H
