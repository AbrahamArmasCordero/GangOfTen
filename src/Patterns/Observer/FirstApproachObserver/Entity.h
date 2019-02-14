#pragma once
#include "Object.h"

class Entity : public Object
{
private:
	bool onCollision;
	float velocity;
	float Acceleration;

public:
	Entity ( );
	~Entity ( );

	bool IsColliding ( ) { return onCollision; }
	void Accelerate ( const float a );
	void Update ( );
};

