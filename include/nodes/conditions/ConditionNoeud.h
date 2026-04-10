#ifndef INC_8INF334_TP3_CONDITIONNOEUD_H
#define INC_8INF334_TP3_CONDITIONNOEUD_H
#include "../INoeud.h"

namespace nodes::conditions
{
	class ConditionNoeud : public INoeud
	{
	private:
		std::optional<std::string> enfantVraiId;
		std::optional<std::string> enfantFauxId;

	protected:
		INoeud* enfantVrai;
		INoeud* enfantFaux;

		/// Executes the conditional check
		virtual bool executerCondition(Contexte& contexte) = 0;

	public:
		ConditionNoeud();

		void executer(Contexte& contexte) override;
		void configurer(const nlohmann::basic_json<>& json) override;
		void lier(const std::unordered_map<std::string, INoeud*>& noeuds) override;
	};
}


#endif //INC_8INF334_TP3_CONDITIONNOEUD_H
