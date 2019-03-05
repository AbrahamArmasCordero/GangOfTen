#pragma once


class IEnemy
{
public:
	IEnemy();
	~IEnemy();
	virtual void Attack() = 0;
};

