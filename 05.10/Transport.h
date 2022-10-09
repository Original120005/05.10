#pragma once
#include <iostream>
using namespace std;

class Transport {
protected:
	string name;
	double max_speed;
	double fuel;
	double cons; 

public:
	virtual void Consumption(int km) {
		cout << "Enter distance in km: ";
		cin >> km;

		cout << "Enter name: ";
		cin >> name;

		cout << "Enter fuel: ";
		cin >> fuel;

		cout << "Enter maximal speed of transport: ";
		cin >> max_speed;

		cons = fuel / km * 100;
	}

	virtual void PrintTrans() {
		cout << "\n\nName of transport: " << name << endl;
		cout << "Average fuel consumption per 100 km: " << cons << endl;
		cout << "Maximal speed of transport: " << max_speed << endl;
	}

};
