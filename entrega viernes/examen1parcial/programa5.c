/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmailmail.com                               */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 16/05/2018                             */
/* Descripcion: La tabla de multiplicar de los primeros 5          */
/* 				                    		   */
/*_________________________________________________________________*/

/* Declaracion de Bibliote principal */
#include <stdio.h>
int main(void)
{
  printf("\nTablas de multiplicar del 1 al 5\n\n" );
  for (int i = 1; i <= 5; i++) /* Ciclos para imprimir las tablas de multiplicar */
  {
    for (int j = 1; j <= 10; j++)
    {
      printf("%d x %d = %d\n", i, j, i*j );
    }
    printf("\n");
  }
  return 0;
}
