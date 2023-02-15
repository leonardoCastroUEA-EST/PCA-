#include <stdio.h>

void procurarValor(int matriz[3][3], int x)
{
    int i, j, encontrado = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == x)
            {
                printf("O valor %d esta na linha %d e coluna %d \n", x, i, j);
                encontrado = 1;
            }
        }
    }

    if (!encontrado)
    {
        printf("O valor %d não foi encontrado na matriz\n", x);
    }
}

int main()
{
    int matriz[3][3], x, i, j;

    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor que deseja procurar na matriz: ");
    scanf("%d", &x);

    procurarValor(matriz, x);

    return 0;
}