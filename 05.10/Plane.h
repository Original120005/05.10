#pragma once
#include "Transport.h"

class Plane : public Transport {

public:
	void Print() {
		this->PrintTrans();
	}

};
