/*----------------------------------------------------------------*/
/* Autor: Maria Emilia Palomec Reyes																  */
/* E-mail: emilia0599@gmail.com                        */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 24/05/2018                                */
/* Descripcion: programa para ejemplificar archivos .h y .c       */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo definimos lo scolores ocupados durante el codigo           */
#include "enums.h"                     /* En este archivo lo que definimos fue el menu                               */
#include "prototipofunciones.h"        /* En este archivo se definen todos los prototipos de funciones               */



int numLabiales;                        /* Ingresamos una variable global*/

int main(void)
{
  Labial listaLabial[TOTAL_LABIAL];    /* Declaracion de la variable labial */
	int opcion;
	do{
    menuPrincipal();                   /* Invocamos a la menu pricipal     */
                                       /* operacionespantalla.c                                               */

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case CREAR:
              while(getchar() != '\n');
              printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     LABIALES\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de labiales: " _TVERDE);
							scanf("%d",&numLabiales);
							printf("\n\n" _ARESET);

							for(int i = 0; i < numLabiales; i++)
							{
                while(getchar() != '\n');
                listaLabial[i] = crearNuevoLabial();   /* Se invoca a la funcion crearNuevoLabial() implementada en operacioneslabia.c  */
              }
              while(getchar() != '\n');
						  detenerPantalla();
              break;

			case LISTAR:
              while(getchar() != '\n');
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    LABIALES\n\n");
              mostrarListaLabial(listaLabial, 0);
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_ASC:
							while(getchar() != '\n');
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
              mostrarListaLabial(listaLabial, 1);
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_DES:
							while(getchar() != '\n');
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E\n\n");
              mostrarListaLabial(listaLabial, 2);      /* Se invoca a la funcion mostrarAlumno() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case BUSCAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
						  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
              buscarLabial(listaLabial);               /* Se invoca a la funcion buscarAlumno() implementada en operacionesAlumno.c      */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
              actualizarLabial(listaLabial);           /* Se invoca a la funcion actualizarlabial() implementada en operacionesLabial.c  */
              while(getchar() != '\n');
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
              eliminarLabial(listaLabial);             /* Se invoca a la funcion eliminarlabial() implementada en operacioneslabial.c    */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case SALIR:
							system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);                                 /* Termina la ejecucion del programa                               */
		}
	}while(opcion != SALIR);

	return 0;
}
