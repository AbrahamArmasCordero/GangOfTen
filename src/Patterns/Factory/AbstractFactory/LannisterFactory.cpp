#include "pch.h"
#include "LannisterFactory.h"


LannisterFactory::LannisterFactory()
{
}


LannisterFactory::~LannisterFactory()
{
}

IHuman * LannisterFactory::CreateHuman()
{
	return new LannisterHuman();
}

IDwarf * LannisterFactory::CreateDwarf()
{
	return new LannisterDwarf();
}
