#include <stdio.h>
#include <string.h>

const char *baralho[4][13] = {
    // Copas (C)
    {"AC", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "10C", "JC", "QC", "KC"},

    // Ouros (O)
    {"AO", "2O", "3O", "4O", "5O", "6O", "7O", "8O", "9O", "10O", "JO", "QO", "KO"},

    // Paus (P)
    {"AP", "2P", "3P", "4P", "5P", "6P", "7P", "8P", "9P", "10P", "JP", "QP", "KP"},

    // Espadas (E)
    {"AE", "2E", "3E", "4E", "5E", "6E", "7E", "8E", "9E", "10E", "JE", "QE", "KE"}};

int main()
{
  int n = 0, count = 0;
  scanf("%d", &n);
  char entrada[n][4];
  int m[4][13];
  for (int i = 0; i < n + 1; i++)
  {
    scanf("%3s", &entrada[i]);
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0, k = 0; j < 13 && k < n; j++ && k++)
    {
      if (strcmp(baralho[i][j], entrada[i][1]) == 0)
      {
        m[i][j] += 1;

      }
    }
  }
}

/*
    Tabela do Baralho

    Linhas (Naipes)      Colunas (Cartas)
    -------------------------------------------------------------------------
    | Índice | Naipe    |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  | 10  | 11  | 12  |
    -------------------------------------------------------------------------
    |   0    | Copas    | Ás  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  | 10  | Val | Dam | Rei |
    |   1    | Ouros    | Ás  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  | 10  | Val | Dam | Rei |
    |   2    | Espadas  | Ás  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  | 10  | Val | Dam | Rei |
    |   3    | Paus     | Ás  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  | 10  | Val | Dam | Rei |
    -------------------------------------------------------------------------

    Explicação:
    - Índice da linha: índice do naipe (0 a 3)
    - Índice da coluna: índice da carta (0 a 12)
    - Ás  = Ás
    - Val = Valete
    - Dam = Dama
    - Rei = Rei
*/
