#pragma once

enum class EnemyType{ GOBLIN, BAT, GHOUL, DRAGON, MAX };

class Enemy
{
public:
	Enemy();
	~Enemy();
	virtual void Attack() = 0;
};

