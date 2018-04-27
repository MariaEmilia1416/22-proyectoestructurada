/* Autor: Maria Emilia Palomec Reyes           */
/* E-mail: emilia0599@gmail.com                                */
/* Fecha de creacion: 19/04/2018                                          */
/* Fecha de actualizacion:                                     */
/* Descripcion:                             */



#include <stdio.h>

const int tamanio = 5; /*Definir una constante*/
int main (void)
{
  char c;
  char array[tamanio];
int index = 0;
  while ((c = getchar()) != '\n') /*leer caracter a caracter*/

  {
    if(c >= 97 && c <= 122) /*validando unicamente caracteres : letras minuculas*/
    {
      c = c-32;
    array[index]=c;
    index++;
  }
  }
  printf("\n");
  for (int i = 0; i < tamanio; i++)
  {
    printf("%c",array[i]);
  }
  printf("\n");

  return  0;
}
