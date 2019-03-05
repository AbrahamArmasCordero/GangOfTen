#include "pch.h"
#include "TargarianFactory.h"


TargarianFactory::TargarianFactory()
{
}


TargarianFactory::~TargarianFactory()
{
}

IHuman * TargarianFactory::CreateHuman()
{
	return new TargarianHuman();
}

IDwarf * TargarianFactory::CreateDwarf()
{
	return new TargarianDwarf();
}
