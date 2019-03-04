

#include "GameMaster.h"

/*PREGUNTAS PLANTEABLES: */
/* 
 *¿Que pasa si tengo a un observer que no observa a nadie? vamos que ese observador no está en ningua lista de ningun sujeto
 *	R: ¿Lo Elimino? o lo dejo ahi 
 *
 *¿Que pasa si tengo un Sujeto pero tiene un puntero a un observer que va a ser borrado?
 *	R: El observer deberia borrar su puntero de los sujetos a los que esta observando,
 *		esto significa implmentar otro contenedor en el observer y cuando añado un observer a un sujeto a ese observer le añado el sujeto
 *		al que ha sido añadido
 *
 *¿Que pasa si yo no quiero que el sujeto tengo un puntero al objeto observer entero sino solo a su metodo OnNotify?
 *	R:¿Function pointers? ¿delegates en C++?
 *
 *Los eventos, que sean strings ya esta bien, ¿pero podria cada observador tener sus propios eventos definidos sin ser constantes 
 *ni enums?
 *	R: Una interfaz evento no estaira mal ¿no?
 *
 *¿Le paso la Entidad pero no hago nada con ella?
 *	R: Bueno complejidad de la implementacion
 *
 *Tambien decir que falta implementar destructores 
 *Y seguramente haya cometido fallos
 */

int main ( )
{
	GameMaster master = GameMaster ( );
	master.GameLoop ( );
	return 0;
}