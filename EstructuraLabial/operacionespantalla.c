/*----------------------------------------------------------------*/
/* Autor: Maria Emilia Palomec Reyes																  */
/* E-mail: emilia0599@gmail.com                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 24/05/18                                      */
/* Descripcion: implementacion de funciones que muestran datos en */
/*              pantalla.                                         */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    C O N T R O L    D E    LABIALES" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de labiales");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de labiales");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de labiales Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de labiales Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar Labial");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar Labial");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar Labial");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|PRECIO|", "NOMBRE", "MARCA", "COLOR");
  printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
}

void mostrarLabial(Labial labial)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\t%f\t|", labial.nombre, labial.marca, labial.color, labial.precio);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
