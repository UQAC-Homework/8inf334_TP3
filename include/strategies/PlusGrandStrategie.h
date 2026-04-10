#ifndef INC_8INF334_TP3_PLUSGRANDSTRATEGIE_H
#define INC_8INF334_TP3_PLUSGRANDSTRATEGIE_H
#include "IStrategie.h"

namespace strategies
{
	class PlusGrandStrategie : public IStrategie
	{
	private:
		std::string left;
		std::string right;

	public:
		PlusGrandStrategie(const std::string& left, const std::string& right);

		bool execute(Contexte& contexte) override;
	};
}

#endif //INC_8INF334_TP3_PLUSGRANDSTRATEGIE_H
