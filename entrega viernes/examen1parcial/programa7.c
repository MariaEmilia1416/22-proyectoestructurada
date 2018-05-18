/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmailmail.com                               */
/* Fecha de Creacion :  17/05/2018                                 */
/* Fecha de Actualizacion : 16/05/2018                             */
/* Descripcion: Dado 3 numeros saber cual es mayor                 */
/* 				                    		   */
/*_________________________________________________________________*/

#include <stdio.h>/* Biblioteca principal */
int main(void)
{
  int numero[3], var;
  printf("El mayor de 3 numeros\n" );
  for (int i = 0; i < 3; i++)
  {
    printf("Ingrese el %d numero : ", i+1 );
      scanf("%d", &numero[i] );
  }

  for (int i = 0; i < 3; i++) /* Ciclos para ordenar los numeros */
  {
    for (int j = 0; j < 3; j++)
    {
      if (numero[i] > numero[j])
      {
        var = numero[j];
        numero[j] = numero[i];
        numero[i] = var;
      }
    }
  }
  printf("EL numero menor es %d\n", numero[2] ); /* Imprime en pantalla los resultados obtenidos */
  printf("EL numero mayor es %d\n", numero[0] );
  if (numero[0] == numero[1] && numero[1] == numero[2])/* Si los 3 numeros on iguales imprime en pantalla un mensaje */
  {
    printf("Los numeros son iguales \n");
  }
  return 0;
}
