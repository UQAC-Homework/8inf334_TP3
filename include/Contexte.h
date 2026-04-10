#ifndef INC_8INF334_TP3_CONTEXTE_H
#define INC_8INF334_TP3_CONTEXTE_H
#include <map>
#include <string>

class Contexte
{
private:
	std::map<std::string, std::size_t> donnees;

public:
	Contexte();
	~Contexte();

	/// Assigns the given value to the given key
	void mettreValeur(const std::string& cle, std::size_t valeur);

	/// Gets the value associated to the given key
	[[nodiscard]] std::size_t obtenirValeur(const std::string& cle) const;

	/// Checks if the given key is present
	[[nodiscard]] bool contientCle(const std::string& cle) const;

	/// Removes the key
	void retirerCle(const std::string& cle);
};

#endif //INC_8INF334_TP3_CONTEXTE_H
