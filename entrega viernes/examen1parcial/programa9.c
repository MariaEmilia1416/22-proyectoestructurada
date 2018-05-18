/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmail.com                                   */
/* Fecha de Creacion :  17/05/2018                                 */
/* Fecha de Actualizacion : 17/05/2018                             */
/* Descripcion: Indica si es un numero par e impar                 */
/* 				                    		   */
/*_________________________________________________________________*/

#include <stdio.h>/* Biblioteca principal */
#include "funciones.h"/* Biblioteca creada por mi :v */
int main(void)
{
  int numero;/* declaracion de variables */
  printf("indicar si el numero es par o impar \n" );
printf("indicar si el numero es positivo o negativo \n" );
  printf("Ingrese un numero : " );/* Solicita el dato al usuario */
    scanf("%d", &numero );
  numero_par_o_impar(numero);/* invoca las funciones de paro o impar y la funcion imprime en pantalla los resultados */
  positivo_o_negativo(numero);
  return 0;
}
