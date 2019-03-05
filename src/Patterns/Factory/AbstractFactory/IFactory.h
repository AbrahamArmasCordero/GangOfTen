#pragma once
#include "IHuman.h"
#include "IDwarf.h"

class IFactory
{
public:
	IFactory();
	~IFactory();
	virtual IHuman* CreateHuman() = 0;
	virtual IDwarf* CreateDwarf() = 0;
};

