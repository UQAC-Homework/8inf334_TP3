#ifndef INC_8INF334_TP3_EFFACERVARIABLENOEUD_H
#define INC_8INF334_TP3_EFFACERVARIABLENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class EffacerVariableNoeud : public TacheNoeud
	{
	private:
		std::optional<std::string> cle;

	public:
		EffacerVariableNoeud();

		INoeud* executer(Contexte& contexte) override;
		void configurer(const nlohmann::basic_json<>& json) override;
	};
}

#endif //INC_8INF334_TP3_EFFACERVARIABLENOEUD_H
