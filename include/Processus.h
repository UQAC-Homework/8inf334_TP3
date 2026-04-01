#ifndef INC_8INF334_TP3_PROCESSUS_H
#define INC_8INF334_TP3_PROCESSUS_H
#include "Contexte.h"
#include "nodes/Noeud.h"


class Processus
{
private:
	nodes::Noeud* depart;
	Contexte contexte;

public:
	explicit Processus(nodes::Noeud* noeud, const Contexte& contexte);

	/// Executes the whole workflow
	void executer();
};


#endif //INC_8INF334_TP3_PROCESSUS_H
