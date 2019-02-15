#pragma once
#include "Subject.h"

class Physics : public Subject
{
private:
	std::vector<Entity*> inSceneEntities;
	void UpdateEntity ( Entity& entity );
public:
	Physics ( );
	void Update ( );
	void SetEntities ( const std::vector<Entity*>& entities);
	~Physics ( );
};

inline Physics::Physics ( )
{
}


inline void Physics::SetEntities ( const std::vector<Entity*>& entities )
{
	inSceneEntities = entities;
}

inline Physics::~Physics ( )
{
}