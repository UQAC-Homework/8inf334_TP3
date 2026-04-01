#include "../../../include/nodes/tasks/LireVariableNoeud.h"

#include <iostream>

nodes::tasks::LireVariableNoeud::LireVariableNoeud()
{
}

nodes::INoeud* nodes::tasks::LireVariableNoeud::executer(Contexte& contexte)
{
	const auto value = contexte.obtenirValeur("aaa");
	std::cout << std::any_cast<std::string>(value) << std::endl;
	return TacheNoeud::executer(contexte);
}
