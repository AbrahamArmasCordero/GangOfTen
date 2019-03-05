#pragma once
#include "IEnemyFactory.h"
#include "Goblin.h"


class GoblinFactory :
	public IEnemyFactory
{
public:
	GoblinFactory();
	~GoblinFactory();
	IEnemy* CreateEnemy() override;
};

