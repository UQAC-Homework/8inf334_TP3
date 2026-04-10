#include <utility>

#include "../include/Contexte.h"

Contexte::Contexte()
{
	this->donnees = {};
}

Contexte::~Contexte() = default;

void Contexte::mettreValeur(const std::string& cle, std::size_t valeur)
{
	this->donnees[cle] = valeur;
}

std::size_t Contexte::obtenirValeur(const std::string& cle) const
{
	return this->donnees.at(cle);
}

bool Contexte::contientCle(const std::string& cle) const
{
	return this->donnees.contains(cle);
}

void Contexte::retirerCle(const std::string& cle)
{
	this->donnees.erase(cle);
}
