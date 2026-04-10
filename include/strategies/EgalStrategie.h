#ifndef INC_8INF334_TP3_EGALSTRATEGY_H
#define INC_8INF334_TP3_EGALSTRATEGY_H
#include "IStrategie.h"

namespace strategies
{
	class EgalStrategie : public IStrategie
	{
	private:
		std::string left;
		std::string right;

	public:
		EgalStrategie(const std::string& left, const std::string& right);

		bool execute(Contexte& contexte) override;
	};
}


#endif //INC_8INF334_TP3_EGALSTRATEGY_H
