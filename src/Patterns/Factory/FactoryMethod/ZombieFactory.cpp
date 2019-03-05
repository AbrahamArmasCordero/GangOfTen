#include "pch.h"
#include "ZombieFactory.h"


ZombieFactory::ZombieFactory()
{
}


ZombieFactory::~ZombieFactory()
{
}

IEnemy * ZombieFactory::CreateEnemy()
{
	return new Zombie();
}
