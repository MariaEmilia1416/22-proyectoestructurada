#include <stdio.h>
#include "funciones.h"

/* Funcion saludo */
void saludos(void)
{
  printf("Hola Mundo :v\n" );
}

/* Funcion area */
float arearectangulo(float base, float altura)
{
  return base * altura;
}

/* funcion volumen */
float volumenrectangulo(float largo, float ancho, float altura )
{
  float volumen;
  volumen = largo * ancho * altura;
  printf("El volumen es de %.2f m³ \n", volumen );
  return volumen;
}

/* funcion metros */
float metroscubicoslitros(float volumen)
{
  float litros;
  litros = volumen * 1000;
  printf("%f m³ es igual a %.2f litros \n", volumen, litros );
}

/*Imprime los numeros del 100 al 0*/
int del100al0(void)
{
  for (int i = 100; i >= 0; i--)/* Ciclo for para imprimir los numeros del 100 al 0 */
  {
    printf("%d\n", i );
  }
}


/*Indica si el numero es par o impar*/
int numeroparoimpar(int numero)
{
  if(numero % 2 == 0)
  {
    printf("El numero %d es un numero par\n", numero );
  }else
      {
        printf("El numero %d es un numero impar\n", numero );
      }
}


/*Indica si el numero es positivo o negativo*/
int positivo_o_negativo(int numero)
{
  if(numero > 0)
  {
    printf("El numero %d es un numero positivo\n", numero );
  }else
      {
        printf("El numero %d es un numero negativo\n", numero );
      }
}


/* Convertir de minusculas amayusculas */
/*void convertir_Minusculas_a_Mayusculas(char array[])
{
  int tamanio = sizeof(array[])/sizeof(char);
  for (int i = 0; i < tamanio; i++)
  {
    array[i] = array[i] - 32;
  }
  printf("%s\n", array[] );
}*/
