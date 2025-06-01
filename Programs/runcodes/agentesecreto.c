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
  int count=0;
  for (int i = 0; i < 2; i++)
  {
    scanf(" %[^\n]", s1[i]);
  }






}
