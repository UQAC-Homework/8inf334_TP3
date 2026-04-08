#include "../include/Enregistreur.h"

#include <stdexcept>

Enregistreur* Enregistreur::instance = nullptr;

Enregistreur::Enregistreur(std::ostream& output) : output(output)
{
}

Enregistreur::~Enregistreur()
{
	if (instance == this)
		instance = nullptr;
}

void Enregistreur::initialiser(std::ostream& output)
{
	if (instance != nullptr)
		return;

	instance = new Enregistreur(output);
}

void Enregistreur::enregistrer(const std::string& message)
{
	if (instance == nullptr)
		throw std::runtime_error("No instance of '" + std::string(typeid(Enregistreur).name()) + " was instantiated.");

	instance->output << message << std::endl;
}

void Enregistreur::enregistrer(const std::exception& exception)
{
	const auto message = std::string(exception.what());
	enregistrer("[ERROR] " + message);
}
