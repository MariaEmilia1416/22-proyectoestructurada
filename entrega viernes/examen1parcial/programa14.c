/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@gmailmail.com                               */
/* Fecha de Creacion :  17/05/2018                                 */
/* Fecha de Actualizacion : 16/05/2018                             */
/* Descripcion:Realice un programa que muestre el factorial        */
/* 				                    		   */
/*_________________________________________________________________*/



#include <stdio.h>
long Factorial(long);
int main()
{

int numero;
printf("Ingrese un numero\n");
scanf("%i",&numero);
for(int i=0;i<=numero; i++)
{
  printf("%ld\n",Factorial(i));
}
return 0;

}
long Factorial(long numero)
{
  if(numero <=1)
{
  return 1;
}else {
  return(numero*Factorial(numero-1));
}
}
