#ifndef INC_8INF334_TP3_PROCESSUS_H
#define INC_8INF334_TP3_PROCESSUS_H
#include <unordered_map>

#include "Contexte.h"
#include "nodes/INoeud.h"

class Processus
{
private:
	std::unordered_map<std::string, nodes::INoeud*> nodes;
	nodes::INoeud* depart;

public:
	explicit Processus();

	/// Assigns the node with the given ID as the starting node
	void mettreDepart(const std::string& id);

	/// Executes the whole workflow
	void executer(Contexte contexte = {}) const;

	/// Adds the given node under the given ID
	void ajouterNoeud(const std::string& id, nodes::INoeud* node);
};

#endif //INC_8INF334_TP3_PROCESSUS_H
