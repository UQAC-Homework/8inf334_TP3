#ifndef INC_8INF334_TP3_STRING_H
#define INC_8INF334_TP3_STRING_H
#include <string>

namespace utils::string
{
	// https://stackoverflow.com/a/71690553
	inline std::string to_string(CONTEXT_VALUE value)
	{
		if (const auto x = std::get_if<int>(&value))
			return std::to_string(*x);

		if (const auto x = std::get_if<double>(&value))
			return std::to_string(*x);

		if (const auto x = std::get_if<std::string>(&value))
			return *x;

		if (const auto x = std::get_if<const char*>(&value))
			return *x;

		return typeid(value).name();
	}
}

#endif //INC_8INF334_TP3_STRING_H
