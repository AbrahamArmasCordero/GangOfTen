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

inline GameMaster::GameMaster ( )
{
	Subject* physics = new Physics ( );
	subjects.push_back (physics);

	Observer* achievements = new Achievements ( );
	Observer* uiFacade = new UI ( );

	physics->AddObserver ( achievements );
	physics->AddObserver ( uiFacade );

	currentScene = new Scene ( );

	((Physics*)physics)->SetEntities (currentScene->GetEntities());


	//physics.notify ( &player, "Ha caido" );

	//physics.RemoveObserver ( uiFacade );
	//physics.notify ( &player, "Pulsado" );
}

inline GameMaster::~GameMaster ( )
{

}
