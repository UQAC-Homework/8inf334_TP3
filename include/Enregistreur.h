#ifndef INC_8INF334_TP3_ENREGISTREUR_H
#define INC_8INF334_TP3_ENREGISTREUR_H

#include <ostream>

class Enregistreur
{
private:
	static Enregistreur* instance;

	std::ostream& output;
	Enregistreur(std::ostream& output);
	~Enregistreur();

public:
	/// Initializes a logger with the given output
	static void initialiser(std::ostream& output);

	/// Logs the given message
	static void enregistrer(const std::string& message);

	/// Logs the given exception
	static void enregistrer(const std::exception& exception);
};


#endif //INC_8INF334_TP3_ENREGISTREUR_H
