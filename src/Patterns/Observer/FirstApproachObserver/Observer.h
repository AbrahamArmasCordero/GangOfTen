#pragma once
#include "Common_Includes.h"

/*INTERFACE*/
class Observer
{
public:
	Observer ( );
	virtual void onNotify ( const Entity* x, std::string event_ ) = 0;
	virtual ~Observer ( );
};

inline Observer::Observer ( )
{
}


inline Observer::~Observer ( )
{
}