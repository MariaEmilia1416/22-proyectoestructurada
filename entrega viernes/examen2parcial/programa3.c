/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmailmail.com                               */
/* Fecha de Creacion :  17/05/2018                                 */
/* Fecha de Actualizacion : 16/05/2018                             */
/* Descripcion:Realice un programa que imprima las letras en       */
/*minusculas                                                       */
/* 				                    		   */
/*_________________________________________________________________*/



#include <stdio.h>


int main()
{
   char cadena[50];
   int i;

   printf("\nEscribe un letra o frase: ");
   scanf("%s", &cadena);

   for(i = 0; cadena[i]; i++)
      cadena[i] = tolower(cadena[i]);

   printf("\n%s\n", cadena);


    printf("\nPresiona Intro para finalizar...");
    return 0;
}
