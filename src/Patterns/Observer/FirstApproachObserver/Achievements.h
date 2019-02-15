#pragma once
#include "Observer.h"

class Achievements : public Observer
{

public:
	Achievements ( );
	~Achievements ( );
	void onNotify( const Entity* x, std::string event_ ) override
	{
		if ( event_ == "Ha caido" )
		{
			std::cout << "Achievements ha recibido que:\n" << "La Entidad: " << typeid(*x).name ( ) << " Ha lanzado el evento " << event_ << '\n';
		}
		else
		{
			std::cout << "Achievements no actua con eventos del tipo  " << event_ << '\n';
		}
	}

};

inline Achievements::Achievements ( )
{

}


inline Achievements::~Achievements ( )
{

}
