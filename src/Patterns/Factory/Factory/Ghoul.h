#pragma once
#include"Enemy.h"


class Ghoul :
	public Enemy
{
public:
	Ghoul();
	~Ghoul();
	void Attack() override;
};

