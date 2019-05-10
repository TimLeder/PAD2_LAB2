#pragma once
#include <iostream>
#include "GeneralDevice.h"

class Heating : public GeneralDevice
{
public:
	Heating(std::string);
	virtual std::string showDevice() const override;
	virtual Heating& operator++() override;
	virtual Heating& operator--() override;
private:
	float temperature = 0;

};