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
		const std::string path = "data/benchmark.json";

		const auto workflow = factories::ProcessusFabrique::creerDepuisFichier(path);
		workflow.executer();
	}
	catch (std::exception& e)
	{
		Enregistreur::enregistrer(e);
		return 1;
	}

	return 0;
}
