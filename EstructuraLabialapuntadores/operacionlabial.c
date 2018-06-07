/*----------------------------------------------------------------*/
/* Autor:   Maria Emilia Palomec Reyes														  */
/* E-mail: emilia0599@gmail.com                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 24/05/18                                          */
/* Descripcion: implementacion de funciones sobre la estructura   */
/*              alumno: crear, listar, ordenar, buscar,           */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int *numLabiales;



Labial crearNuevoLabial(void)
{
  Labial labial;

  printf(_TBLANCO _NEGRITA "Introduce el nombre del labial: "              _NNEGRITA _TAZUL);
  fgets(labial.nombre, TAM_NOM, stdin);                                    /* Solicita el nombre del labial al usuario          */
  strcpy(labial.nombre, strtok(labial.nombre, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce la marca del labial: "           _NNEGRITA _TAZUL);
  fgets(labial.marca, TAM_MAR, stdin);                                 /* Solicita la marca al usuario        */
  strcpy(labial.marca, strtok(labial.marca, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el color del labial: " _NNEGRITA _TAZUL);
  fgets(labial.color, TAM_COLOR, stdin);                         /* Solicita la fecha de nacimiento al usuario        */
  strcpy(labial.color, strtok(labial.color, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */


  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */



  printf(_TBLANCO _NEGRITA "Introduce el precio del labial: "                _NNEGRITA _TVERDE);
  scanf("%f", &labial.precio);
  printf("\n\n");

  return labial;
}




void mostrarListaLabial(Labial listaLabial[], int ordenar)
{
  int arrayTemp[*numLabiales];
  for(int i = 0; i < *numLabiales; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaLabial, arrayTemp), sizeof(arrayTemp));
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaLabial, arrayTemp), sizeof(arrayTemp));
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < *numLabiales; i++)
  {
    mostrarLabial(listaLabial[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarLabial(Labial listaLabial[])
{
  int *opcionBuscar;
  char *nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char *marcaBuscar[TAM_MAR];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
  printf(_TCYAN     _NEGRITA "Buscar labial por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "\t2. Marca \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &*opcionBuscar);

  switch(*opcionBuscar)
  {
    case _xNombre:
        while(getchar() != '\n');

        printf(_TCYAN _NEGRITA "\n\nIngrese el nombre del labial: ");
        fgets(*nombreBuscar, TAM_NOM, stdin);
        strcpy(*nombreBuscar, strtok(*nombreBuscar, "\n"));

        for(int *i = 0; *i < *numLabiales; i++)
            if(strcmp(*nombreBuscar, listaLabial[*i].nombre) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarLabial(listaLabial[*i]);
            }
            break;

      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(*marcaBuscar, TAM_MAR, stdin);
          strcpy(*marcaBuscar, strtok(*marcaBuscar, "\n"));

          for(int *i = 0; *i < *numLabiales; i++)
          if(strcmp(*marcaBuscar, listaLabial[*i].marca) == 0)
          {
            mostrarEncabezadoTabla();
            mostrarLabial(listaLabial[*i]);
          }
          break;
  }
}



void actualizarLabial(Labial listaLabial[])
{
  int *opcionBuscar;
  char *nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char *marcaBuscar[TAM_MAR];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Buscar el Labial a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "\t2. Marca\n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &*opcionBuscar);

  switch(*opcionBuscar)
  {
      case _xNombre:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
          fgets(*nombreBuscar, TAM_NOM, stdin);
          strcpy(*nombreBuscar, strtok(*nombreBuscar, "\n"));

          for(int i = 0; i < *numLabiales; i++)
          {
              if(strcmp(*nombreBuscar, listaLabial[i].nombre) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLabial(listaLabial[i]);

                  printf("\n\n");

                  listaLabial[i] = crearNuevoLabial();

                  mostrarEncabezadoTabla();
                  mostrarLabial(listaLabial[i]);

                  break;
              }
          }
          break;

      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(*marcaBuscar, 50, stdin);
          strcpy(*marcaBuscar, strtok(*marcaBuscar, "\n"));

          for(int i = 0; i < *numLabiales; i++)
          {
              if(strcmp(*marcaBuscar, listaLabial[i].marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLabial(listaLabial[i]);

                  printf("\n\n");

                  listaLabial[i] = crearNuevoLabial();

                  mostrarEncabezadoTabla();
                  mostrarLabial(listaLabial[i]);

                  break;
              }
          }

          break;
  }
}



void eliminarLabial(Labial listaLabial[])
{
  int *opcionBuscar;
  char *nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char *marcaBuscar[TAM_MAR];         /* Almacena la marca buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Eliminar alumno por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "2. Matricula \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &*opcionBuscar);

  switch(*opcionBuscar)
  {
      case _xNombre:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
          fgets(*nombreBuscar, TAM_NOM, stdin);
          strcpy(*nombreBuscar, strtok(*nombreBuscar, "\n"));

          for(int i = 0; i < *numLabiales; i++)
          {
              if(strcmp(*nombreBuscar, listaLabial[i].nombre) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLabial(listaLabial[i]);

                   printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char *opcionEliminar;
                  while((*opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaLabial));
                    listaLabial = eliminarUnLabial(listaLabial, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la matricula: ");
          fgets(*marcaBuscar, TAM_NOM, stdin);
          strcpy(*marcaBuscar, strtok(*marcaBuscar, "\n"));

          for(int i = 0; i < *numLabiales; i++)
          {
              if(strcmp(*marcaBuscar, listaLabial[i].marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLabial(listaLabial[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char *opcionEliminar;
                  while((*opcionEliminar = getchar()) == 's')
                  {
                      listaLabial = eliminarUnLabial(listaLabial, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}



Labial * eliminarUnLabial(Labial listaLabial[], int posicion)
{
  if(posicion < *(numLabiales - 1))
  {
    for(int *j = posicion; *j < *numLabiales-1; *j++)
    {
      strcpy(listaLabial[*j].nombre,          listaLabial[*j+1].nombre);
      strcpy(listaLabial[*j].marca,       listaLabial[*j+1].marca);
      strcpy(listaLabial[*j].color, listaLabial[*j+1].color);
      listaLabial[*j].precio= listaLabial[*j+1].precio;
    }
  }

  strcpy(listaLabial[*numLabiales-1].nombre, "");
  strcpy(listaLabial[*numLabiales-1].marca, "");
  strcpy(listaLabial[*numLabiales-1].color, "");
  listaLabial[*numLabiales-1].precio= -1;

  *numLabiales--;

  printf("\n\nEl registro se ha eliminado .\n\n");

  return listaLabial;
}
