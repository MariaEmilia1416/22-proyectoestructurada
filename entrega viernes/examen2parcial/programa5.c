/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmail.com                                   */
/* Fecha de Creacion :  15/05/2018                                 */
/* Fecha de Actualizacion : 15/05/2018                             */
/* Descripcion:Escriba un programa que permita crear un arreglo    */
/*unidimensional de tipo int, de tamaño 10                         */
/* 				                    		   */
/*_________________________________________________________________*/

#include <stdio.h>
int main(void)
{
	int vector[10] = {7,1,4,5,6,9,2,3,0,2}, var;
	for (int i = 0; i < 10; ++i)
	{
		for (int j = i+1; j < 10; ++j)
		{
			if (vector[i]>vector[j])
			{
				var = vector[j];
				vector[j] = vector[i];
				vector[i] = var;
			}
		}
	}
		printf("Orden  de manera ascendente\n");
			for (int i = 0; i < 10; ++i)
				{
					printf("%d\n", vector[i] );
				}

		printf("Orden  de manera decreciente\n");
			for (int i = 9; i >= 0; --i)
				{
					printf("%d\n", vector[i] );
				}
	return 0;
}
