#ifndef INC_8INF334_TP3_TACHENOEUD_H
#define INC_8INF334_TP3_TACHENOEUD_H
#include "../INoeud.h"

namespace nodes::tasks
{
	class TacheNoeud : public INoeud
	{
	private:
		std::optional<std::string> enfantId;

	protected:
		INoeud* enfant;

	public:
		TacheNoeud();

		void executer(Contexte& contexte) override;
		void configurer(const nlohmann::basic_json<>& json) override;
		void lier(const std::unordered_map<std::string, INoeud*>& noeuds) override;
	};
}


#endif //INC_8INF334_TP3_TACHENOEUD_H
