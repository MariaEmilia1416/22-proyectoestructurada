/*Autor: Maria Emilia Palomec Reyes                         */
/*E-mail: emilia0599@gmail.com                              */
/*Fecha de creacion: 19/04/2018                             */
/*Fecha de actualizacion: 20/04/2018                        */
/*Descripcion:programa para convertir letras minusculas a   */
/*mayusculas y mayusculas a minusculas                      */

#include <stdio.h>

const int tamanio = 5; /*definir una constante*/



int main(void)

{
  char c;
  char array[tamanio] , array2[tamanio];


  int index = 0;
  while((c = getchar()) !='\n') /*Leer caracter a caracter*/

  {
    if(c >= 97 && c <= 122) /*validando unicamente caracter: letras minusculas*/
    {
    c = c-32;
    array[index] = c;
    index++;
    }

  }
  printf("\n");
  for(int i=0; i<tamanio; i++)
{
  printf("%c",array[i]);
}


  printf("\n");
  index = 0;

while((c = getchar()) !='\n') /*Leer caracter a caracter*/

  {
    if(c >= 65 && c <= 90) /*validando unicamente caracter: letras minusculas*/
    {
    c = c+32;
    array2[index] = c;
    index++;
    }

  }
  printf("\n");
  for(int i=0; i<tamanio; i++)
{
  printf("%c",array2[i]);
}


  printf("\n");




  return 0;
}
