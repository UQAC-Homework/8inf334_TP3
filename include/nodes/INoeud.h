#ifndef INC_8INF334_TP3_INOEUD_H
#define INC_8INF334_TP3_INOEUD_H

#include "../Contexte.h"
#include "../../library/json.hpp"

namespace nodes
{
	class INoeud
	{
	public:
		virtual ~INoeud() = default;

		/// Executes this node
		[[nodiscard]] virtual INoeud* executer(Contexte& contexte) = 0;

		/// Configures this node with the given parameters
		virtual void configurer(const nlohmann::basic_json<>& json) = 0;

		/// Links the related nodes to the loaded nodes
		virtual void lier(const std::unordered_map<std::string, INoeud*>& noeuds) = 0;
	};
}

#endif //INC_8INF334_TP3_INOEUD_H
