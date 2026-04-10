#ifndef INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
#define INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class EcrireVariableNoeud : public TacheNoeud
	{
	private:
		std::optional<std::string> cle;
		std::optional<std::size_t> valeur;

	public:
		EcrireVariableNoeud();

		void executer(Contexte& contexte) override;

		void configurer(const nlohmann::basic_json<>& json) override;
	};
}


#endif //INC_8INF334_TP3_ASSIGNERVARIABLENOEUD_H
