// AbstractFactory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "IFactory.h"
#include "LannisterFactory.h"
#include "TargarianFactory.h"

int main()
{
	IFactory* factory = new LannisterFactory();
	IHuman* myHuman01 = factory->CreateHuman();
	IDwarf* myDwarf01 = factory->CreateDwarf();

	myHuman01->Talk();
	myDwarf01->Talk();

	factory = new TargarianFactory();

	IHuman* myHuman02 = factory->CreateHuman();
	IDwarf* myDwarf02 = factory->CreateDwarf();

	myHuman02->Talk();
	myDwarf02->Talk();


	return 0;
}
