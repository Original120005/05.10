#pragma once
#include "Transport.h"

class Ship : public Transport {

public:
	void Print() {
		this->PrintTrans();
	}

};

