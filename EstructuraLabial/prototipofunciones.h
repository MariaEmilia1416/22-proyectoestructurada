/*----------------------------------------------------------------*/
/* Autor: Maria Emilia Palomec Reyes														  */
/* E-mail: emilia0599@gmail.com                                   */
/* Fecha creacion: 22/05/2018                                     */
/* Descripcion: definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/* Fecha actualizacion:24/05/18                                           */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_MAR      12        /* Tamaño de marca                                   */
#define TAM_COLOR    12        /* Tamaño de color                                   */
#define TOTAL_LABIAL 10        /* Tamaño del total de labiales                       */


/* Se define una estructura para modelar los datos de una labial. */
/* Los miembros de la estructura son:                             */
/*                                    - nombre                    */
/*                                    - marca                     */
/*                                    - color                      */
/*                                    -Precio                      */
typedef struct
{
	char nombre[TAM_NOM];
	char marca[TAM_MAR];
	char color[TAM_COLOR];
	float precio;

}Labial;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarLabial(Labial);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de labiales */
Labial crearNuevoLabial(void);
void mostrarListaLabial(Labial [], int);
void buscarLabial(Labial []);
void actualizarLabial(Labial []);
void eliminarLabial(Labial []);


/* Funcion que permite eliminar el alumno, es invocada por la funcion eliminarlabial() */
Labial * eliminarUnLabial(Labial [], int);


/* Funciones que permiten ordenar los datos de los labiales */
int * ordenarAscendente(Labial [], int []);
int * ordenarDescendente(Labial [], int []);


#endif
