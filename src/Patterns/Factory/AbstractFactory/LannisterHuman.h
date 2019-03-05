#pragma once
#include "IHuman.h"
class LannisterHuman :
	public IHuman
{
public:
	LannisterHuman();
	~LannisterHuman();
	void Talk() override;
};

