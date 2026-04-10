#include "../../include/strategies/PlusGrandStrategie.h"

strategies::PlusGrandStrategie::PlusGrandStrategie(const std::string& left, const std::string& right)
{
	this->left = left;
	this->right = right;
}

bool strategies::PlusGrandStrategie::execute(Contexte& contexte)
{
	if (!contexte.contientCle(this->left) || !contexte.contientCle(this->right))
		return false;

	const auto leftValue = contexte.obtenirValeur(left);
	const auto rightValue = contexte.obtenirValeur(right);

	return leftValue > rightValue;
}
