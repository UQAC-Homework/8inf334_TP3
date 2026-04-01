#ifndef INC_8INF334_TP3_CONTEXTE_H
#define INC_8INF334_TP3_CONTEXTE_H
#include <any>
#include <map>
#include <string>

class Contexte
{
private:
	std::map<std::string, std::any> donnees;

public:
	Contexte();
	~Contexte();

	/// Assigns the given value to the given key
	void mettreValeur(const std::string& cle, std::any valeur);

	/// Gets the value associated to the given key
	std::any obtenirValeur(const std::string& cle) const;

	/// Checks if the given key is present
	bool contientCle(const std::string& cle) const;

	/// Removes the key
	void retirerCle(const std::string& cle);
};

#endif //INC_8INF334_TP3_CONTEXTE_H
