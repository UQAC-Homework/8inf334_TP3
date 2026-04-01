#include <filesystem>
#include <fstream>
#include <iostream>

#include "include/factories/ProcessusFactory.h"

int main()
{
	const std::string path = "data/test.json";

	if (!std::filesystem::exists(path))
		throw std::runtime_error("File at '" + path + "' does not exist.");

	std::ifstream file(path);
	const std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	auto json = nlohmann::json::parse(content);

	auto workflow = factories::ProcessusFactory::creer(json);

	workflow->executer();
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
