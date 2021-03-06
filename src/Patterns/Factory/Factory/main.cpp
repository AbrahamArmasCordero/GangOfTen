// Factory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "EnemyFactory.h"


int main()
{
	/*
#pragma region Anti Pattern solution
	//Código en escena 1
	Enemy* MyEnemy01;
	int x;
	std::cin >> x;
	switch (x)
	{
		case static_cast<int>(EnemyType::BAT):
			MyEnemy01 = new Bat();
			break;
		case static_cast<int>(EnemyType::DRAGON) :
			MyEnemy01 = new Dragon();
			break;
		case static_cast<int>(EnemyType::GHOUL) :
			MyEnemy01 = new Ghoul();
			break;
		case static_cast<int>(EnemyType::GOBLIN) :
			MyEnemy01 = new Goblin();
			break;
		default:
			MyEnemy01 = nullptr;
			break;
	}
	MyEnemy01->Attack();

	//Código en escena 2
	Enemy* myEnemy02;
	int y;
	std::cin >> y;
	switch (y)
	{
		case static_cast<int>(EnemyType::BAT) :
			myEnemy02 = new Bat();
			break;
		case static_cast<int>(EnemyType::DRAGON) :
			myEnemy02 = new Dragon();
			break;
		case static_cast<int>(EnemyType::GHOUL) :
			myEnemy02 = new Ghoul();
			break;
		case static_cast<int>(EnemyType::GOBLIN) :
			myEnemy02 = new Goblin();
			break;
		default:
			myEnemy02 = nullptr;
			break;
	}
	myEnemy02->Attack();

#pragma endregion
*/
#pragma region Pattern Simple Factory
	//Factory
	EnemyFactory enemieFactory;

	std::vector<Enemy*> enemies;

	enemies.push_back(enemieFactory.createEnemy(EnemyType::GOBLIN));
	enemies.push_back(enemieFactory.createEnemy(EnemyType::DRAGON));
	enemies.push_back(enemieFactory.createEnemy(EnemyType::GHOUL));
	enemies.push_back(enemieFactory.createEnemy(EnemyType::BAT));
	enemies.push_back(enemieFactory.createEnemy(EnemyType::GOBLIN));

	for(Enemy* enemy : enemies)
	{
		enemy->Attack();
	}
#pragma endregion
	return 0;
}
