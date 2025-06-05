#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir(int m, int quan[m], char *nom[], char ***liv)
{
  printf("Catalogo de Livros:\n");
  for (int i = 0; i < m; i++)
  {
    printf("%s %d:\n", nom[0], i + 1);
    for (int j = 0; j < 3; j++)
    {
      printf("%s: %s\n", nom[j + 1], liv[i][j]);
    }
    printf("%s: %d\n", nom[4], quan[i]);
    if (i != m - 1)
      printf("\n");
  }
}

int main()
{
  int n = 0;
  scanf("%d\n", &n); // lê número de livros

  char ***livros;
  char *nomes[] = {"Livro", "Titulo", "Autor", "Ano", "Quantidade"};
  int *quantidade = (int *)calloc(n, sizeof(int));

  // aloca memória para livros
  livros = (char ***)malloc(sizeof(char **) * n);
  for (int i = 0; i < n; i++)
  {
    livros[i] = (char **)malloc(sizeof(char *) * 3);
    for (int j = 0; j < 3; j++)
    {
      livros[i][j] = (char *)malloc(sizeof(char) * 101);
    }
  }

  int pos = 0; // quantidade de livros válidos armazenados

  for (int i = 0; i < n; i++)
  {
    char temp_titulo[101], temp_autor[101], temp_ano[101];

    // lê uma linha no formato: titulo , autor , ano
    scanf(" %100[^,], %100[^,], %100[^\n]", temp_titulo, temp_autor, temp_ano);

    // verifica se já existe esse título entre os livros válidos
    int achou = 0;
    for (int k = 0; k < pos; k++)
    {
      if (strcmp(temp_titulo, livros[k][0]) == 0)
      {
        quantidade[k] += 1; // incrementa quantidade no livro já existente
        achou = 1;
        break;
      }
    }

    // se não achou duplicado, armazena nos livros[pos]
    if (!achou)
    {
      strcpy(livros[pos][0], temp_titulo);
      strcpy(livros[pos][1], temp_autor);
      strcpy(livros[pos][2], temp_ano);
      quantidade[pos] = 1;
      pos++;
    }
  }

  // realoca quantidade para tamanho real
  int *tmp = realloc(quantidade, pos * sizeof(int));
  if (tmp != NULL)
    quantidade = tmp;

  imprimir(pos, quantidade, nomes, livros);

  // libera memória dos livros
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      free(livros[i][j]);
    }
    free(livros[i]);
  }
  free(livros);

  // libera memória da quantidade
  free(quantidade);

  return 0;
}
