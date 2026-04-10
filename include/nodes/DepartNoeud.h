#ifndef INC_8INF334_TP3_DEPARTNOEUD_H
#define INC_8INF334_TP3_DEPARTNOEUD_H
#include "INoeud.h"

namespace nodes
{
	class DepartNoeud : public INoeud
	{
	private:
		std::optional<std::string> enfantId;
		INoeud* enfant;

	public:
		DepartNoeud();

		void executer(Contexte& contexte) override;
		void configurer(const nlohmann::basic_json<>& json) override;
		void lier(const std::unordered_map<std::string, INoeud*>& noeuds) override;
	};
}


#endif //INC_8INF334_TP3_DEPARTNOEUD_H
