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

		const auto start = std::chrono::high_resolution_clock::now();
		
		for (int i = 0; i < 1'000; ++i)
			workflow.executer({});

		const auto end = std::chrono::high_resolution_clock::now();

		const auto duration = duration_cast<std::chrono::microseconds>(end - start);

		std::cout << duration.count() / 1'000 << std::endl;
	}
	catch (std::exception& e)
	{
		Enregistreur::enregistrer(e);
		return 1;
	}

	return 0;
}
