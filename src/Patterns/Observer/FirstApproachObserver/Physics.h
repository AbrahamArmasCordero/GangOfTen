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
	//aqui estoy simulando como si comprobasemos los atributos interesantes de esa entidad y hiciesemos su update y segun sus
	//atributos mandasemos se�ales
	std::cout << "Estoy cayendo asi que envio una notificacion\n";
	notify ( entity, "Ha caido" );

	std::cout << "Ahora estoy pulsando\n";/* el motor de fisicas no pulsa botones, lo se*/
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