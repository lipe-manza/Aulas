#include <stdio.h>

int mult(int m1, int k1, int m2, int k2, int ma1[m1][k1], int ma2[m2][k2], int ma3[m1][k2])
{
  int sum = 0;
  for (int j = 0; j < m1; j++)
  {
    for (int i = 0; i < k2; i++)
    {
      for (int h = 0; h < k1; h++)
      {
        
      }
    }
  }
}
int main()
{
  int n1, t1, n2, t2;
  // size of the matrixs
  printf("escolha o valor das linhas e colunas da 1matriz:");
  scanf("%d %d", &n1, &t1);
  printf("escolha o valor das linhas e colunas da 1matriz:");
  scanf("%d %d", &n2, &t2);

  if (t1 != n2)
  {
    printf("não é possivel multiplicar");
    return 0;
  }
  int m1[n1][t1];
  int m2[n2][t2];

  printf("escolha os valores da 1matriz %dx%d", n1, t1);
  for (int j = 0; j < t1; j++)
  {
    for (int i = 0; i < n1; i++)
    {
      scanf("%d", &m1[i][j]);
    }
  }
  printf("escolha os valores da 2matriz %dx%d", n2, t2);
  for (int j = 0; j < t2; j++)
  {
    for (int i = 0; i < n2; i++)
    {
      scanf("%d", &m2[i][j]);
    }
  }

  int m3[n1][t2];

  mult(n1, t1, n2, t2, m1, m2, m3);
}
