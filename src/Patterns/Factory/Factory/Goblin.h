#pragma once
#include "Enemy.h"
class Goblin :
	public Enemy
{
public:
	Goblin();
	~Goblin();
	void Attack() override;
};

