/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmail.com                               */
/* Fecha de Creacion :  17/05/2018                                 */
/* Fecha de Actualizacion : 17/05/2018                             */
/* Descripcion: Indice de masa corporal                            */
/* 				                    		   */
/*_________________________________________________________________*/

#include <stdio.h> /* Biblioteca principal */
#include "funciones.h" /*  */
float imc(float peso, float estatura);/* Declaracion de la funcion */
int main(void)/* funcion principal */
{
  float IMC, peso, estatura;
  printf("Indice de Masa Corporal\n" );
  printf("Ingrese su peso : " );
    scanf("%f", &peso );
  printf("Ingrese su estatura : " );
      scanf("%f", &estatura );
  IMC = imc( peso, estatura);/* se le asigna el valor a la variable IMC usando la funcion imc*/
  printf("Su IMC es de : %.2f \n", IMC );/*Imprime los resultados en pantalla*/

  return 0;
}
float imc(float peso, float estatura)
{
  return peso/(estatura * estatura);
}
