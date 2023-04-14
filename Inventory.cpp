#include "Inventory.h"
#include <iostream>

FInventory::FInventory()
{
}

FInventory::~FInventory()
{
}

void FInventory::Input()
{
	std::cout << "아이템 넣기" << std::endl;;
}

void FInventory::Output()
{
	std::cout << "아이템 빼기" << std::endl;;
}