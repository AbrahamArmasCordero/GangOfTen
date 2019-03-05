#pragma once
#include "IFactory.h"
#include "TargarianHuman.h"
#include "TargarianDwarf.h"

class TargarianFactory :
	public IFactory
{
public:
	TargarianFactory();
	~TargarianFactory();
	IHuman* CreateHuman() override;
	IDwarf* CreateDwarf() override;
};

