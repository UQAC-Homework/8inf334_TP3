#ifndef INC_8INF334_TP3_PROCESSUS_H
#define INC_8INF334_TP3_PROCESSUS_H
#include "nodes/Noeud.h"


class Processus
{
private:
	nodes::Noeud* depart;

public:
	explicit Processus(nodes::Noeud* noeud);

	/// Executes the whole workflow
	void executer();
};


#endif //INC_8INF334_TP3_PROCESSUS_H
