#include "Subject.h"

class Prueba : public Observer
{
public:
	Prueba ( ) : Observer ( )
	{

	}

	void onNotify ( const Entity& x, std::string event_ ) override
	{
		if ( event_ == "Hola" )
		{
			std::cout << "Evento Hola Lanzado\n";
		}
		else
		{
			std::cout << "El vento: " << event_ << " no tiene efecto en Prueba\n";
		}
	}

};
/*PREGUNTAS SIN RESOLVER: 
 *¿que pasa si tengo a un observer que no observa a nadie? vamos que ese observador no está en ningua lista de ningun sujeto
 *
 *¿que pasa si yo no quiero que el sujeto tengo un puntero al objeto observer entero sino solo a su metodo OnNotify?
 *
 *Los eventos, que sean strings ya esta bien, ¿pero podria cada observador tener sus propios eventos definidos sin ser constantes 
 *ni enums?
 *
 *¿Le paso la Entidad pero no hago nada con ella?
 *
 *Tambien decir que falta implementar destructores 
 *Y seguramente hay cometido fallos
 */
int main ( )
{
	Subject prueba = Subject ( );
	Entity Player = Entity( );

	Observer* x = new Prueba ( );
	Observer* y = new Prueba ( );
	Observer* z = new Prueba ( );

	prueba.AddObserver ( x );
	prueba.AddObserver ( y );
	prueba.AddObserver ( z );

	prueba.notify ( Player, "Ha caido");

	prueba.RemoveObserver ( x );

	prueba.notify ( Player, "Hola" );

	return 0;
}