#include <filesystem>
#include <fstream>
#include <iostream>

#include "include/Enregistreur.h"
#include "include/factories/ProcessusFabrique.h"

int main()
{
	constexpr int ITERATIONS = 10'000;

	Enregistreur::initialiser(std::cout);

	try
	{
		const std::string path = "data/benchmark.json";

		const auto workflow = factories::ProcessusFabrique::creerDepuisFichier(path);

		const auto start = std::chrono::high_resolution_clock::now();
		
		for (int i = 0; i < ITERATIONS; ++i)
			workflow.executer({});

		const auto end = std::chrono::high_resolution_clock::now();

		const auto duration = duration_cast<std::chrono::nanoseconds>(end - start);

		std::cout << "For " << ITERATIONS << " iterations, the average duration is: " << duration.count() / ITERATIONS << " ns." << std::endl;
	}
	catch (std::exception& e)
	{
		Enregistreur::enregistrer(e);
		return 1;
	}

	return 0;
}
