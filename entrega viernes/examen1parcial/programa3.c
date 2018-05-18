/*Autor: Maria Emilia Palomec Reyes                        */
/*E-mail: emilia0599@gmail.com                             */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Una constructora se dedica a construir       */
/*tanques de almacenamiento de agua (como se muestra en la */
/*figura de abajo). Esta constructora desea saber cuántos  */
/*litros de agua almacenará un tanque según las dimensiones*/
/*que le proporcione el cliente. Desarrolle un programa para*/
/*resolver la necesidad de la constructora, considere que  */
/*1m 3 equivale a 1000 litros de agua                      */

#include <stdio.h>

int litrosalberca(float largo, float ancho, float altura,float preciocubico);


int main(void)
{
  float largo=34;
  float ancho=25;
  float altura=43;
  float preciocubico=26;

  int alberca = litrosalberca(largo,ancho,altura,preciocubico);

  printf("lo que se debe pagar es: %d",alberca);

  return 0;
}

  int litrosalberca(float largo, float ancho, float altura,float preciocubico)

{
  return (altura*largo*ancho);

}
