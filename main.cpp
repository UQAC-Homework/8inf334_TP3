#include <filesystem>
#include <fstream>
#include <iostream>

#include "include/factories/ProcessusFactory.h"

int main()
{
	const std::string path = "data/test.json";

	const auto workflow = factories::ProcessusFactory::creerDepuisFichier(path);

	workflow.executer();
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
