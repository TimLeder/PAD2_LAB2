#include <iostream>
#include <sstream>
#include <vector>
#include "Coffeemachine.h"
#include "Heating.h"
#include "Radio.h"
using namespace std;

int main() {

	vector<GeneralDevice*>devices;
	devices.push_back(new Coffeemachine("Tchibo KM 3"));
	devices.push_back(new Radio("Radio WZ"));
	devices.push_back(new Radio("Radio Kueche"));
	devices.push_back(new Heating("Heizung OG"));
	devices.push_back(new Heating("Heizung EG"));

	GeneralDevice* actualDevice = nullptr;

	char input;

	cout << "Smart House Remote Control\n\n"
		<< "+: Increment" << endl
		<< "-: Decrement" << endl
		<< "0: Shut Down" << endl
		<< "1: " << devices[0]->getDeviceName() << endl
		<< "2: " << devices[1]->getDeviceName() << endl
		<< "3: " << devices[2]->getDeviceName() << endl
		<< "4: " << devices[3]->getDeviceName() << endl
		<< "5: " << devices[4]->getDeviceName() << endl
		<< "?: Overview\n-------------\n" << endl;

	bool running = true;

	while (running)
	{
		cin >> input;
		switch (input)
		{
		case '0':
			running = false;
			cout << "Shutting Down...\n";
			break;
		case '1':
			cout << devices[0]->toString();
			actualDevice = devices[0];
			break;
		case '2':
			cout << devices[1]->toString();
			actualDevice = devices[1];
			break;
		case '3':
			cout << devices[2]->toString();
			actualDevice = devices[2];
			break;
		case '4':
			cout << devices[3]->toString();
			actualDevice = devices[3];
			break;
		case '5':
			cout << devices[4]->toString();
			actualDevice = devices[4];
			break;
		case '+':
			if (actualDevice == nullptr)
				cout << "Select a device before changing it's value!" << endl;
			else
			{
				++(*actualDevice);
				cout << actualDevice->showDevice();
			}
			break;
		case '-':
			if (actualDevice == nullptr)
				cout << "Select a device before changing it's value!" << endl;
			else
			{
				--(*actualDevice);
				cout << actualDevice->showDevice();
			}
			break;
		case '?':
			for (int i = 0; i < 5; i++)
			{
				cout << devices[i]->toString() << "- " << devices[i]->showDevice() << endl;
			}
		default:
			cout << "Error\n" << endl;
			actualDevice = nullptr;
			break;
		}
	}
}