#include "pch.h"
#include "GoblinFactory.h"


GoblinFactory::GoblinFactory()
{
}


GoblinFactory::~GoblinFactory()
{
}

IEnemy * GoblinFactory::CreateEnemy()
{
	return new Goblin();
}
