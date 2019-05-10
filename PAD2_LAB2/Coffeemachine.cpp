#include "Coffeemachine.h"
#include <sstream>

Coffeemachine::Coffeemachine(std::string input) : GeneralDevice(input)
{
}

std::string Coffeemachine::showDevice() const
{
	std::stringstream out;
	out << "Number of cups: " << numberOfCups << std::endl;
	return out.str();
}

Coffeemachine& Coffeemachine::operator++()
{
	numberOfCups += 1;
	return *this;
}

Coffeemachine& Coffeemachine::operator--()
{
	numberOfCups -= 1;
	return *this;
}
