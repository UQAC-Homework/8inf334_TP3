#ifndef INC_8INF334_TP3_NOEUDFACTORY_H
#define INC_8INF334_TP3_NOEUDFACTORY_H
#include "../../library/json.hpp"
#include "../nodes/INoeud.h"

namespace factories
{
	class NoeudFabrique
	{
	private:
		/// Creates an empty node of the given type
		static std::unique_ptr<nodes::INoeud> creerVide(const std::string& type);

	public:
		/// Creates a node from the given object
		static std::unique_ptr<nodes::INoeud> creer(const nlohmann::basic_json<>& json);
	};
}

#endif //INC_8INF334_TP3_NOEUDFACTORY_H
