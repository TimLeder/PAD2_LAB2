#include "Radio.h"
#include <sstream>

Radio::Radio(std::string input) : GeneralDevice(input)
{
}

std::string Radio::showDevice() const
{
	std::stringstream out;
	out << "Volume: " << volume << " dB" << std::endl;
	return out.str();
}

Radio& Radio::operator++()
{
	volume += 1;
	return *this;
}

Radio& Radio::operator--()
{
	volume -= 1;
	return *this;
}
