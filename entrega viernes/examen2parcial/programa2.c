/*Autor: Maria Emilia Palomec Reyes                        */
/*E-mail: emilia0599@gmail.com                             */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion: Mayusculas a minusculas                     */


#include <stdio.h>


int main()
{
   char cadena[50];
   int i;

   printf("\nEscribe un letra o frase: ");
   scanf("%s", &cadena);

   for(i = 0; cadena[i]; i++)
      cadena[i] = toupper(cadena[i]);

   printf("\n%s\n", cadena);


    printf("\nPresiona Intro para finalizar...");
  return 0;
}
