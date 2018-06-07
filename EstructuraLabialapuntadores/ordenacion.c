/*----------------------------------------------------------------*/
/* Autor: Maria Emilia Palomec 																  */
/* E-mail: emilia0599@gmail.com                        */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 24/05/18                                         */
/* Descripcion: implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int *numLabiales;

int *ordenarAscendente(Labial listaLabial[], int arrayTemp[])
{
  for(int i = 0; i < *numLabiales; i++)
  {
    for(int j = i + 1; j < *numLabiales; j++)
    {
      if(strcmp(listaLabial[arrayTemp[i]].nombre, listaLabial[arrayTemp[j]].nombre) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int *ordenarDescendente(Labial listaLabial[], int arrayTemp[])
{
  for(int i = 0; i < *numLabiales; i++)
  {
    for(int j = i + 1; j < *numLabiales; j++)
    {
      if(strcmp(listaLabial[arrayTemp[i]].nombre, listaLabial[arrayTemp[j]].nombre) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] =aux;
      }
    }
  }
  return arrayTemp;
}
