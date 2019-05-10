#pragma once
#include <iostream>
#include "GeneralDevice.h"

class Radio : public GeneralDevice
{
public:
	Radio(std::string);
	virtual std::string showDevice() const override;
	virtual Radio& operator++() override;
	virtual Radio& operator--() override;
private:
	double volume = 0;

};