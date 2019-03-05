#include "pch.h"
#include "EnemyFactory.h"


EnemyFactory::EnemyFactory()
{
}


EnemyFactory::~EnemyFactory()
{
}

//Funci�n que nos devuelve el puntero a la subclase seg�n la informaci�n que recibe
Enemy* EnemyFactory::createEnemy(const EnemyType type)
{
	switch (type)
	{
	case EnemyType::GOBLIN:
		return new Goblin();
	case EnemyType::BAT:
		return new Bat();
	case EnemyType::DRAGON:
		return new Dragon();
	case EnemyType::GHOUL:
		return new Ghoul();
	default:
		return nullptr;
	}
}
