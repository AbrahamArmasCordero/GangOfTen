#pragma once
#include "IFactory.h"
#include "LannisterDwarf.h"
#include "LannisterHuman.h"


class LannisterFactory :
	public IFactory
{
public:
	LannisterFactory();
	~LannisterFactory();
	IHuman* CreateHuman() override;
	IDwarf* CreateDwarf() override;
};

