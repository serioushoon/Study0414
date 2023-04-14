#pragma once
#include "Charicter.h"

class FInventory : public FCharicter
{
public:
	FInventory();
	virtual ~FInventory();

	void Input();
	void Output();
};

