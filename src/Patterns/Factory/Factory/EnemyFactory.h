#pragma once
#include "Enemy.h"
#include "Goblin.h"
#include "Dragon.h"
#include "Ghoul.h"
#include "Bat.h"

class EnemyFactory
{
public:
	EnemyFactory();
	~EnemyFactory();
	Enemy* createEnemy(const EnemyType);
};

