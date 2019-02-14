#pragma once
#include "Common_Includes.h"
#include "Entity.h"

/*INTERFACE*/
class Observer
{
public:
	Observer ( );
	virtual ~Observer ( );
	virtual void onNotify (const Entity& x, std::string event_ ) = 0;
};

