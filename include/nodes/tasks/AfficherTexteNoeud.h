#ifndef INC_8INF334_TP3_AFFICHERTEXTENOEUD_H
#define INC_8INF334_TP3_AFFICHERTEXTENOEUD_H
#include "TacheNoeud.h"

namespace nodes::tasks
{
	class AfficherTexteNoeud : public TacheNoeud
	{
	private:
		std::optional<std::string> texte;

	public:
		AfficherTexteNoeud();
		
		INoeud* executer(Contexte& contexte) override;
		void configurer(const nlohmann::basic_json<>& json) override;
	};
}


#endif //INC_8INF334_TP3_AFFICHERTEXTENOEUD_H
