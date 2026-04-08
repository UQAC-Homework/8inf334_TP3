#ifndef INC_8INF334_TP3_STRING_H
#define INC_8INF334_TP3_STRING_H
#include <any>
#include <string>

namespace utils::string
{
	// https://stackoverflow.com/a/71690553
	inline std::string to_string(std::any value)
	{
		if (const auto x = std::any_cast<int>(&value))
			return std::to_string(*x);

		if (const auto x = std::any_cast<float>(&value))
			return std::to_string(*x);

		if (const auto x = std::any_cast<double>(&value))
			return std::to_string(*x);

		if (const auto x = std::any_cast<std::string>(&value))
			return *x;

		if (const auto x = std::any_cast<const char*>(&value))
			return *x;

		return value.type().name();
	}
}

#endif //INC_8INF334_TP3_STRING_H
