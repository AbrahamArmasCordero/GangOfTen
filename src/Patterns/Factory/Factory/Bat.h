#pragma once
#include "Enemy.h"
class Bat :
	public Enemy
{
public:
	Bat();
	~Bat();
	void Attack() override;
};

