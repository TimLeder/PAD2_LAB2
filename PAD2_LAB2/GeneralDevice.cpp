#include "GeneralDevice.h"
#include <sstream>
#include <iostream>

GeneralDevice::GeneralDevice(std::string input) : deviceName(input)
{
}

std::string GeneralDevice::getDeviceName() const
{
	return deviceName;
}

std::string GeneralDevice::toString() const
{
	std::stringstream out;
	out << "Device: " << deviceName << std::endl;
	return out.str();
}

GeneralDevice::~GeneralDevice()
{
}
