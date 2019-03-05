#pragma once

class IHuman
{
public:
	IHuman();
	~IHuman();
	virtual void Talk() = 0;
};

