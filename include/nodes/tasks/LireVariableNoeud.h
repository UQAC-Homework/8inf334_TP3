#ifndef INC_8INF334_TP3_LIREVARIABLENOEUD_H
#define INC_8INF334_TP3_LIREVARIABLENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class LireVariableNoeud : public TacheNoeud
	{
	private:
		std::optional<std::string> cle;

	public:
		LireVariableNoeud();

		INoeud* executer(Contexte& contexte) override;
		void configurer(const nlohmann::basic_json<>& json) override;
	};
};

#endif //INC_8INF334_TP3_LIREVARIABLENOEUD_H
