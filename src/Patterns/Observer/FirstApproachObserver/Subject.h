#pragma once
#include "Entity.h"
#include "Common_Includes.h"
#include "Observer.h"

class Subject
{
protected:
	struct ObserverNode 
	{
		Observer* observer;
		ObserverNode* next = nullptr;

		ObserverNode ( Observer* ob )
		{
			observer = ob;
		}
	}*head_ = nullptr;

public:
	Subject ( );
	void AddObserver ( Observer* ob );
	void RemoveObserver ( Observer* ob );
	void notify (const Entity& entity, std::string event_ );
	virtual ~Subject ( );
};

