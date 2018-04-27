#include <stdio.h>

#define RESET "\x1b[0m"            /*resetear el color*/
#define NEGRO "\x1b[30m"          /*Color negro*/
#define ROJO "\x1b[31m"          /*Color rojo*/
#define VERDE "\x1b[32m"         /*Color verde*/
#define AMARILLO "\x1b[33m"      /*Color amarillo*/
#define AZUL "\x1b[34m"           /*Color azul*/
#define MORADO "\x1b[35m"       /*Color morado*/
#define CYAN "\x1b[36m"        /*Color cyan*/

#define NEGRITA "\x1b [1m"   /*texto en negritas*/

#define TAM 20             /*DECLARACION DEL TAMAÑO DEL ARREGLO*/
#define ROW 5              /*DECLARACION DE LAS FILAS*/
#define COL 5             /*Declaracion de las columnas*


/*Definicion de tipos de datos estructura*/

/*struct nombreEstrura
{
miembros de la estructura;
} ;
*/

struct Alumno
{
  char matricula[10];
  char nombre [50];
  int edad;
  char sexo [1];
  int edad;
  float peso;
  float estatura;

};
/*cuerpo de la duncion main*/
int main (void) /*no se le esta enviando ningun valor a main*/


{
  /*declaracion de la estructura alumno*/

  struct Alumno edson; /*declaracion de la variable alumno*/

  /*asignacion de datos: a los miembros de la esctructura  Alumno*/
 /*tipo de operador punto*/
 /*edson.matricula = "2017060236"*/
 /*de preferencia no ocupar*/
 /*strcpy(cadena en la que se copia)*/
strcpy (edson.matricula = "2017060236" );
strcpy (edson.nombre, "SANTOS ZARATE EDSON OSNART");
edson.sexo = "H";
edson.edad = 18;
edson.estatura = 1.60;
edson.peso = 60;


printf(ROJO "%s\n", edson.nombre);
printf(AMARILLO "%s\n", edson.nombre);
printf(MORADO "%c\n", edson.nombre);
printf(VERDE "%d\n", edson.nombre);
printf(ROJO "%f\n", edson.nombre);
printf(AZUL "%f\n", edson.nombre);
  return 0;
}


/*  char matricula[10];
  char curp [18];
  char niveldeestudio[30];
  char nombre [50];
  int edad;
  char sexo [1];
  char fechadenacimineto [10]
  float peso;
  float estatura;
  char tiposanguineo;
  char telefono [12];
  char direccion[50];
  char alegia [20];
  char deporte [15]; */





/*cuerpo de la funcion main*/
