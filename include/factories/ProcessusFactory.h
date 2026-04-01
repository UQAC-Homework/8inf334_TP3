#ifndef INC_8INF334_TP3_PROCESSUSFACTORY_H
#define INC_8INF334_TP3_PROCESSUSFACTORY_H
#include <string>

#include "../Processus.h"

namespace factories
{
	class ProcessusFactory
	{
	public:
		/// Creates a new workflow from the given text
		static Processus creer(const std::string& texte);
	};
}

#endif //INC_8INF334_TP3_PROCESSUSFACTORY_H
