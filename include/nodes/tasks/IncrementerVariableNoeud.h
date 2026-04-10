#ifndef INC_8INF334_TP3_INCREMENTERVARIABLENOEUD_H
#define INC_8INF334_TP3_INCREMENTERVARIABLENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class IncrementerVariableNoeud : public TacheNoeud
	{
	private:
		std::optional<std::string> cle;
		std::optional<int> ajout;

	public:
		IncrementerVariableNoeud();

		INoeud* executer(Contexte& contexte) override;
		void configurer(const nlohmann::basic_json<>& json) override;
	};
}

#endif //INC_8INF334_TP3_INCREMENTERVARIABLENOEUD_H
