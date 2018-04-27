/*Autor: Maria Emilia Palomec Reyes                         */
/*E-mail: emilia0599@gmail.com                              */
/*Fecha de creacion: 19/04/2018                             */
/*Fecha de actualizacion: 20/04/2018                        */
/*Descripcion:programa para inicializar y mostrar una matriz*/
/*en una columna                                            */



#include <stdio.h>

int main (void)
{
int matriz[5][1] = { {1},{1},{1},{1},{1}};
for (int i = 0; i < 5 ; i++)
{
  for (int j = 0; j < 1; j++)
  {
    printf(" %d ", matriz[i][j] );
  }
  printf("\n");
  }
  return 0;
}
