#ifndef INC_8INF334_TP3_CONDITIONNOEUD_H
#define INC_8INF334_TP3_CONDITIONNOEUD_H
#include "../INoeud.h"
#include "../../strategies/IStrategie.h"

namespace nodes::conditions
{
	class ConditionNoeud : public INoeud
	{
	private:
		std::optional<std::string> enfantVraiId;
		std::optional<std::string> enfantFauxId;

		std::string type;
		strategies::IStrategie* strategie;

	protected:
		INoeud* enfantVrai;
		INoeud* enfantFaux;

	public:
		ConditionNoeud(const std::string& type);

		INoeud* executer(Contexte& contexte) override;
		void configurer(const nlohmann::basic_json<>& json) override;
		void lier(const std::unordered_map<std::string, INoeud*>& noeuds) override;
	};
}


#endif //INC_8INF334_TP3_CONDITIONNOEUD_H
