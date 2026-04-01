#ifndef INC_8INF334_TP3_PROCESSUS_H
#define INC_8INF334_TP3_PROCESSUS_H
#include "Contexte.h"
#include "nodes/INoeud.h"

class Processus
{
private:
	nodes::INoeud* depart;

public:
	explicit Processus();
	
	/// Assigns the given node as the starting node
	void mettreDepart(nodes::INoeud* noeud);

	/// Executes the whole workflow
	void executer(Contexte contexte = {}) const;
};

#endif //INC_8INF334_TP3_PROCESSUS_H
