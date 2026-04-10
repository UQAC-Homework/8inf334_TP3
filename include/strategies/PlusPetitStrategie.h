#ifndef INC_8INF334_TP3_PLUSPETITSTRATEGIE_H
#define INC_8INF334_TP3_PLUSPETITSTRATEGIE_H

#include "IStrategie.h"

namespace strategies
{
	class PlusPetitStrategie : public IStrategie
	{
	private:
		std::string left;
		std::string right;

	public:
		PlusPetitStrategie(const std::string& left, const std::string& right);

		bool execute(Contexte& contexte) override;
	};
}


#endif //INC_8INF334_TP3_PLUSPETITSTRATEGIE_H
