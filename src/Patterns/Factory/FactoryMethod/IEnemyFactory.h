#pragma once
#include"IEnemy.h"

class IEnemyFactory
{
public:
	IEnemyFactory();
	~IEnemyFactory();
	virtual IEnemy* CreateEnemy() = 0;
};

