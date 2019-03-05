#pragma once
#include "IDwarf.h"


class LannisterDwarf :
	public IDwarf
{
public:
	LannisterDwarf();
	~LannisterDwarf();
	void Talk() override;
};

