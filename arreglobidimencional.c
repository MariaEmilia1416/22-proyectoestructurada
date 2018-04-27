/*Autor: Maria Emilia Palomec Reyes                        */
/*E-mail: Emilia0599@hotmail.com                           */
/*Fecha de creacion: 24/04/2018                            */
/*Fecha de actualizacion:                                  */
/*Descripcion: Arreglo bidimencional                       */

#include <stdio.h>
#include <stdlib.h>
/*definicion de cosntante*/
#define ROW 5 /*definiendo numero de filas*/
#define COL 3 /*Definiendo numero de columnas*/
#define MAX 100 /*rango superior de los datos aleatorios*/
int main (void)
{
 int array [ROW][COL];

 /*inicializar el array con valores enteros aletorios 1 al 100*/
printf("\n");
 for (int i = 0; i < ROW; i++)
 {
   printf("{");
   /*ASIGNACION DE DATOS AL ARRAY*/

   for (int j = 0; i < COL; j++) /*ciclo que controla las columnas del array*/
    {
      printf("%d, ", array[i][j] );
      {
        printf("%d");
      }


         /*ASIGNACION DE DATOS AL ARRAY*/
         /*Utilizando la funcion scanf*/


    array [i][j] = rand() % (MAX+1);

    /*TAREA PARA EL VIERNES*/
    /*GENERAR VALORES ALEATORIOS ENTRE EL 0 HASTA EL 1000*/
   }
 }

 /*DATOS ALEATORIOS DE LA MATRIZ*/

 printf("\x1b[32m  Datos alaetorios de la matriz: array[%d][%d]\n",ROW, COL);
 printf("\x1b[42m otro color mensaje\n");
  return 0;
}
