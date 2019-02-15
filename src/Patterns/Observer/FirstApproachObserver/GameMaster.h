#pragma once
#include "Common_Includes.h"

#include "Achievements.h" //observer
#include "UI.h" //observer

#include "Physics.h" //subject 

#include "Player.h" //entity->Object

class Scene
{
private:
	std::vector<Entity*> inSceneEntities;
public:
	std::vector<Entity*> GetEntities ( ) { return inSceneEntities; }
	Scene ( );
	~Scene ( );
};

inline Scene::Scene ( )
{
	Entity player = Player ( );
	inSceneEntities.push_back ( &player );
}

inline Scene::~Scene ( )
{
}

class GameMaster
{
private:
	Scene* currentScene;
	std::vector<Subject*> subjects;
	std::vector<Observer*> observers;
public:
	void GameLoop ( );
	GameMaster ( );
	~GameMaster ( );
};

inline void GameMaster::GameLoop ( )
{
 //physics update
	for (Subject* subject_ : subjects)
	{
		if ( typeid(*subject_) == typeid(Physics) ) /*¡¡¡¡AVISO!!! no se lo que estoy haciendo, esto es codigo de ejemplo porfavor 
													si vas a hacer algo similar mira exactamente como funciona <typeinfo>*/
		{
			((Physics*)subject_)->Update ( ); //si es el "motor" de fisicas updatealo
		}
	}
}

inline GameMaster::GameMaster ( )
{
	Subject* physics = new Physics ( );
	subjects.push_back (physics);

	Observer* achievements = new Achievements ( );
	Observer* uiFacade = new UI ( );

	physics->AddObserver ( achievements );
	physics->AddObserver ( uiFacade );

	currentScene = new Scene ( );

	((Physics*)physics)->SetEntities (currentScene->GetEntities()); //cogemos las entidades de la escena
}

inline GameMaster::~GameMaster ( )
{

}
