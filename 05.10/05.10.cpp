#include <iostream>
#include "Plane.h"
#include "Jeep.h"
#include "Bike.h"
#include "Ship.h"
#include "Truck.h"
using namespace std;

int main() {
	Transport* ptr = nullptr;

	int choose;
	cout << "1. Plane\n2. Bike\n3. Jeep\n4. Ship\n5. Truck\n->  ";
	cin >> choose;

	switch (choose) {
	case 1:
		ptr = new Plane();
		break;

	case 2:
		ptr = new Bike();
		break;

	case 3:
		ptr = new Jeep();
		break;

	case 4:
		ptr = new Ship();
		break;

	case 5:
		ptr = new Truck();
		break;
	}
	ptr->Consumption(0);
	ptr->PrintTrans();

	delete ptr;
}