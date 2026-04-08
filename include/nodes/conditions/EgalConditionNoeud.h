#ifndef INC_8INF334_TP3_EGALCONDITIONNOEUD_H
#define INC_8INF334_TP3_EGALCONDITIONNOEUD_H
#include "ConditionNoeud.h"

namespace nodes::conditions
{
	class EgalConditionNoeud : public ConditionNoeud
	{
	private:
		std::vector<std::string> cles;

	protected:
		bool executerCondition(Contexte& contexte) override;

	public:
		EgalConditionNoeud();
		
		void configurer(const nlohmann::basic_json<>& json) override;
	};
}

#endif //INC_8INF334_TP3_EGALCONDITIONNOEUD_H
