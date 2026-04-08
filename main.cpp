#include <filesystem>
#include <fstream>
#include <iostream>

#include "include/Enregistreur.h"
#include "include/factories/ProcessusFabrique.h"

int main()
{
	Enregistreur::initialiser(std::cout);

	try
	{
		const std::string path = "data/conditions.json";

		const auto workflow = factories::ProcessusFabrique::creerDepuisFichier(path);
		Contexte contexte;
		contexte.mettreValeur("ma_variable", std::string("123321"));

		workflow.executer(contexte);
	}
	catch (std::exception& e)
	{
		Enregistreur::enregistrer(e);
		return 1;
	}

	return 0;
}
