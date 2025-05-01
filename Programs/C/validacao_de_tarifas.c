#include <stdio.h>
int main()
{

    int codigo, periodo, idade;
    float valor;

    printf("codigo de servico de 1 a 4:");
    scanf("%d", &codigo);
    printf("periodo:");
    scanf("%d", &periodo);
    printf("idade:");
    scanf("%d", &idade);

    if (codigo < 1 || codigo > 4 || periodo < 1 || periodo > 2 || idade < 0)
    {
        printf("entrada invalida");
        return 0;
    }

    switch (codigo)
    {
    case 1:
        valor = (periodo == 1) ? 4 : 5;
        break;
    case 2:
        valor = (periodo == 1) ? 4.5 : 6;
        break;
    case 3:
        valor = (periodo == 1) ? 3.8 : 5.2;
        break;
    case 4:
        valor = (periodo == 1) ? 4.3 : 5.5;
        break;
    }

    if (idade < 6)
    {

        valor = 0;
    }
    else if (idade > 6 && idade < 17)
    {
        valor = valor / 2;
    }
    else if (idade > 60)
    {
        valor = valor * 0.25;
    }

    printf("o valor tarifado eh: %f", valor);

    return 0;
}