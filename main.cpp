#include <filesystem>
#include <fstream>

#include "include/factories/ProcessusFactory.h"

int main()
{
	const std::string path = "data/test.json";

	const auto workflow = factories::ProcessusFactory::creerDepuisFichier(path);
	Contexte contexte;
	contexte.mettreValeur("ma_variable", std::string("123321"));

	workflow.executer(contexte);
	return 0;
}
