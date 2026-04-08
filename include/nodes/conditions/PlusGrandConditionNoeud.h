#ifndef INC_8INF334_TP3_PLUSGRANDCONDITIONNOEUD_H
#define INC_8INF334_TP3_PLUSGRANDCONDITIONNOEUD_H
#include "ConditionNoeud.h"

namespace nodes::conditions
{
	class PlusGrandConditionNoeud : public ConditionNoeud
	{
	private:
		std::optional<std::string> cleGauche;
		std::optional<std::string> cleDroite;

	protected:
		bool executerCondition(Contexte& contexte) override;

	public:
		PlusGrandConditionNoeud();

		void configurer(const nlohmann::basic_json<>& json) override;
	};
}


#endif //INC_8INF334_TP3_PLUSGRANDCONDITIONNOEUD_H
