#include "Subject.h"

Subject::Subject ( )
{
}


void Subject::AddObserver ( Observer* ob )
{
	ObserverNode* tmp = new ObserverNode(ob);

	tmp->next = head_; //el nuevo nodo pone detras suyo a la cabeza
	head_ = tmp; // la cabeza pasa a ser el nuevo nodo

	tmp = nullptr;
}

void Subject::RemoveObserver ( Observer* ob )
{

	if ( head_->observer == ob )
	{
		ObserverNode* tmp = head_->next; //nodo que quiero borrar
		head_ = tmp->next;
		tmp->next = nullptr;
		delete tmp; //libero la memoria de ese nodo pero no la del observer
		return;
	}

	ObserverNode* current = head_;

	while (	current != nullptr)
	{
		if ( current->next->observer == ob ) //si el que quiero borrar es el siguiente a al current
		{
			ObserverNode* tmp = current->next; //nodo que quiero borrar

			current->next = tmp->next; //lo elimino de la lista
			tmp->next = nullptr; //apunta a nullptr
			delete tmp; // borro la memoria que esta ocupando ese nodo pero no el observador

			return;
		}
		current = current->next;
	}
}

void Subject::notify ( const Entity* entity, std::string event_ )
{
	ObserverNode* current = head_;

	while (current != nullptr)
	{
		current->observer->onNotify (entity, event_ );
		current = current->next;
	}
}

Subject::~Subject ( )
{
}
