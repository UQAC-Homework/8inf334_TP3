#ifndef INC_8INF334_TP3_PLUSPETITCONDITIONNOEUD_H
#define INC_8INF334_TP3_PLUSPETITCONDITIONNOEUD_H
#include "ConditionNoeud.h"

namespace nodes::conditions
{
	class PlusPetitConditionNoeud : public ConditionNoeud
	{
	private:
		std::optional<std::string> cleGauche;
		std::optional<std::string> cleDroite;

	protected:
		bool executerCondition(Contexte& contexte) override;

	public:
		PlusPetitConditionNoeud();

		void configurer(const nlohmann::basic_json<>& json) override;
	};
}


#endif //INC_8INF334_TP3_PLUSPETITCONDITIONNOEUD_H
