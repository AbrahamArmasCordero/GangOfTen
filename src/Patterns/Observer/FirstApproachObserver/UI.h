#pragma once 
#include "Observer.h"

class UI : public Observer
{
public:
	UI ( );
	~UI ( );

	void onNotify( const Entity* x, std::string event_ ) override
	{
		if ( event_ == "Pulsado" )
		{
			std::cout << "La UI ha recibido que:\n" << "La Entidad: " << typeid(*x).name ( ) << " Ha lanzado el evento " << event_ << '\n';

		}
		else
		{
			std::cout << "La UI no actua con eventos del tipo " << event_ << '\n';
		}
	}
};

inline UI::UI ( )
{
}


inline UI::~UI ( )
{
}
