#pragma once
#include "Enemy.h"
class Dragon :
	public Enemy
{
public:
	Dragon();
	~Dragon();
	void Attack() override;
};

