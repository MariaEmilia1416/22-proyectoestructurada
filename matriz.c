#include <stdio.h>

int main (void)
{
int matriz[3][5] = { {1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
for (int i = 0; i < 3 ; i++)
{
  for (int j = 0; j < 5; j++)
  {
    printf(" %d ", matriz[i][j] );
  }
  printf("\n");
  }
  return 0;
}
