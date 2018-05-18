/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmail.com                                   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion: Escriba un programa que permita crear un arreglo   */
/*unidimensional de tipo int, de tamaño 10                         */
/* 				                    		   */
/*_________________________________________________________________*/

#include <stdio.h>
int main(void)

{
int arreglo[9]= {1,2,3,4,5,6,7,8,9};
int i,menor=arreglo[0];
for( i=1; i<9; i++ )
{
  if(menor<arreglo[i])
     menor=arreglo[i];

 }
  printf("el numero mayor es: %d\n",menor);
     return 0;

}
