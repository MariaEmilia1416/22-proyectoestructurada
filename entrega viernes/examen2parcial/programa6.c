/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmail.com                                   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Escriba un programa que permita crear un arreglo   */
/*bidimensional de tipo int, de tamaño [5][5]                      */
/* 				                    		   */
/*_________________________________________________________________*/
#include <stdio.h>

int main (void)

{
int matriz[5][5] = { {1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
for (int i = 0; i < 5 ; i++)
{
  for (int j = 0; j < 5; j++)

  {




    printf(" %d ", matriz[i][j] );
  }
  printf("\n");
  }

  return 0;
}
