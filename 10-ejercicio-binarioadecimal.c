/* Autor: Maria Emilia Palomec Reyes                                    */
/* E-mail: emilia0599@gmail.com                                        */
/* Fecha de creacion: 24/04/2018                                       */
/* Fecha de actualizacion: 25/04/18                                    */
/* Descripcion: Realizar un programa que que convierta los numeroS     */
/*binarios a decimal                                                   */


#include <stdio.h>
#include <math.h>

int main(void)
{

	char binario[8]={0};

	int numbinario[8];

	int decimal=0;

	int a;

	int b=-1;

printf("Ingrese el numero binario :  ");

	scanf("%8s",binario);

	for(a=7;a>=0;a=a-1);
	{
		b++;

		switch(binario[b])

		{

			case '0':

				numbinario[a]=0;

			break;

			case '1':

				numbinario[a]=1;

			break;

			default:

			printf("Los numero que ingreso son incorrectos");

		}

		decimal=numbinario[a]*pow(2,a)+decimal;

	}

	printf("\nEl numero en decimal es %i",decimal);

	return 0;

}
