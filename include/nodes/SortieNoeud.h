#ifndef INC_8INF334_TP3_SORTIENOEUD_H
#define INC_8INF334_TP3_SORTIENOEUD_H
#include "INoeud.h"

namespace nodes
{
	class SortieNoeud : public INoeud
	{
	public:
		SortieNoeud();

		void executer(Contexte& contexte) override;
		void configurer(const nlohmann::basic_json<>& json) override;
		void lier(const std::unordered_map<std::string, INoeud*>& noeuds) override;
	};
}

#endif //INC_8INF334_TP3_SORTIENOEUD_H
