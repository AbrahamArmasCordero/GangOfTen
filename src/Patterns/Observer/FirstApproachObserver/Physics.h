#pragma once
#include "Subject.h"

class Physics : public Subject
{
private:
	std::vector<Entity*> inSceneEntities;
	void UpdateEntity ( Entity* entity );
public:
	Physics ( );
	void Update ( );
	void SetEntities ( const std::vector<Entity*>& entities);
	~Physics ( );
};

inline void Physics::UpdateEntity ( Entity* entity )
{
	std::cout << "Estoy cayendo asi que envio una notificacion\n";
	notify ( entity, "Ha caido" );

	std::cout << "Ahora estoy pulsando\n";
	notify ( entity, "Pulsado" );
}

inline Physics::Physics ( )
{
}

inline void Physics::Update ( )
{
	for ( Entity* entity_ : inSceneEntities )
	{
		UpdateEntity ( entity_ );
	}
}


inline void Physics::SetEntities ( const std::vector<Entity*>& entities )
{
	inSceneEntities = entities;
}

inline Physics::~Physics ( )
{
}