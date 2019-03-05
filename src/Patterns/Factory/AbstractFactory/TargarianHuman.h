#pragma once
#include "IHuman.h"
class TargarianHuman :
	public IHuman
{
public:
	TargarianHuman();
	~TargarianHuman();
	void Talk() override;
};

