/*Autor: Maria Emilia Palomec Reyes                        */
/*E-mail: Emilia0599@hotmail.com                           */
/*Fecha de creacion: 24/04/2018                            */
/*Fecha de actualizacion: 25/04/2018                       */
/*Descripcion:  Convertir de decimal a binario             */


#include <stdio.h>

int main(void)

{

      int binario[100], i=0, j=0, x;

      printf("dame un numero: \n");

      fflush(stdin);

      scanf("%d",&x);

      for(i=100;i>0;i--)

      {

           binario[i]=x%2;

           x=x/2;

      }

      for(i=1;i<=100;i++)

      {

           if(binario[i]==1)

           {

                for(j=i;j<=100;j++)

                {

                     printf("%d",binario[j]);

                }

                break;

           }

      }

      return 0;

}
