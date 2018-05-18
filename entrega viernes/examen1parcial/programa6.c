/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmailmail.com                               */
/* Fecha de Creacion :  17/05/2018                                 */
/* Fecha de Actualizacion : 17/05/2018                             */
/* Descripcion: Saber si puedes votar                              */
/* 				                    		   */
/*_________________________________________________________________*/

#include <stdio.h> /* Biblioteca principal */
int main(void)
{
  int edad;
  printf("\nMayor de edad\n" );/* Solicita datos al usuario */
  printf("Ingrese su edad : " );
    scanf("%d", &edad );
  if (edad >= 18)/* Condicion para saber si puedes votar o no */
  {
    printf("Puede votar en las elecciones \n");
  }else
      {
        printf("Usted no puede votar :´v\n" );
      }
  return 0;
}
