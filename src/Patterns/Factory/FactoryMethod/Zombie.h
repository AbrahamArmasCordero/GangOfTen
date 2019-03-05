#pragma once
#include "IEnemy.h"

class Zombie :
	public IEnemy
{
public:
	Zombie();
	~Zombie();
	void Attack() override;
};

