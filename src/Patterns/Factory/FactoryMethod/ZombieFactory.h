#pragma once
#include "IEnemyFactory.h"
#include "Zombie.h"

class ZombieFactory :
	public IEnemyFactory
{
public:
	ZombieFactory();
	~ZombieFactory();
	IEnemy* CreateEnemy() override;
};

