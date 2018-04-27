/*Autor: Maria Emilia Palomec Reyes                         */
/*E-mail: emilia0599@gmail.com                              */
/*Fecha de creacion: 19/04/2018                             */
/*Fecha de actualizacion: 20/04/2018                        */
/*Descripcion:programa para inicializar y mostrar una matriz*/
/*Cuadrada                                                  */


#include <stdio.h>

int main (void)
{
int matriz[3][3] = { {1,1,1},{1,1,1},{1,1,1}};
for (int i = 0; i < 3 ; i++)
{
  for (int j = 0; j < 3; j++)
  {
    printf(" %d ", matriz[i][j] );
  }
  printf("\n");
  }
  return 0;
}
