#pragma once
#include <iostream>
#include "GeneralDevice.h"

class Coffeemachine : public GeneralDevice
{
public:
	Coffeemachine(std::string);
	virtual std::string showDevice() const override;
	virtual Coffeemachine& operator++() override;
	virtual Coffeemachine& operator--() override;
private:
	int numberOfCups = 0;

};