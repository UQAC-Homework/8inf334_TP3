#include <filesystem>
#include <fstream>
#include <iostream>

#include "include/Enregistreur.h"
#include "include/factories/ProcessusFactory.h"

int main()
{
	Enregistreur::initialiser(std::cout);

	try
	{
		const std::string path = "data/test.json";

		const auto workflow = factories::ProcessusFactory::creerDepuisFichier(path);
		Contexte contexte;
		contexte.mettreValeur("ma_variable", std::string("123321"));

		workflow.executer(contexte);
	}
	catch (std::exception e)
	{
		Enregistreur::enregistrer(e);
	}

	return 0;
}
