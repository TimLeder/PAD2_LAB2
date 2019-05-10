#include "Heating.h"
#include <sstream>

Heating::Heating(std::string input) : GeneralDevice(input)
{
}

std::string Heating::showDevice() const
{
	std::stringstream out;
	out << "Temperature: " << temperature << " C" << std::endl;
	return out.str();
}

Heating& Heating::operator++()
{
	temperature += 1;
	return *this;
}

Heating& Heating::operator--()
{
	temperature -= 1;
	return *this;
}
