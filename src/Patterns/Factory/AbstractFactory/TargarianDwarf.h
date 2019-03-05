#pragma once
#include "IDwarf.h"
class TargarianDwarf :
	public IDwarf
{
public:
	TargarianDwarf();
	~TargarianDwarf();
	void Talk() override;
};

