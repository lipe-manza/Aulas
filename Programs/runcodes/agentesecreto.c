#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char **s1;
  // alocação
  s1 = (char **)malloc(sizeof(char *) * 3);
  for (int i = 0; i < 3; i++)
  {
    s1[i] = (char *)malloc(sizeof(char) * 100);
  }
  // leitura
  int n1 = strlen(s1[0]);
  int n2 = strlen(s1[1]);
  for (int i = 0; i < 2; i++)
  {
    scanf(" %[^\n]", s1[i]);
  }
  int j = 0;
  int count= 0;
  for (int i = 0; i < n1; i++)
  {
    if( strncmp(s1[0]+i, s1[1], n2 - j)==0)
    {
      count++;
    }
    j--;
  }
}
