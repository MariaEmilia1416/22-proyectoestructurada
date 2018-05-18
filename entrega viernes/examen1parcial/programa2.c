/*Autor: Maria Emilia Palomec Reyes                        */
/*E-mail: emilia0599@gmail.com                             */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Un agricultor de maíz desea conocer el área  */
/*de su terreno que tiene la forma rectangular, como se    */
/*muestra en la figura de abajo. Elabore un programa que   */
/*sea capaz de determinar el área de la figura considerando*/
/*la entrada de los valores desde el teclado. Los datos    */
/*deberán de introducirse por el teclado                   */

#include <stdio.h>

int areaterreno(float,float,float);


int main(void)
{
  float a=56;
  float b=68.6;
  float c=56.3;

  int terreno = areaterreno(a,b,c);

  printf("el area es de %d",terreno);


  return 0;
}

int areaterreno(float a,float b,float c)

{
  return (c*(a+b)/2);

}
