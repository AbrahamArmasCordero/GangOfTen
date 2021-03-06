// FactoryMethod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "GoblinFactory.h"
#include "ZombieFactory.h"

int main()
{
    //Factory method

	IEnemyFactory* enemyFactory = new GoblinFactory();
	IEnemy* myEnemy = enemyFactory->CreateEnemy();
	myEnemy->Attack();

	enemyFactory = new ZombieFactory();
	myEnemy = enemyFactory->CreateEnemy();
	myEnemy->Attack();

	return 0;
}


