#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

void imprimirDiagonalPrincipal(int matriz[LINHAS][COLUNAS])
{
    printf("Diagonal Principal: ");
    for (int i = 0; i < LINHAS; i++)
    {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
}

void imprimirDiagonalSecundaria(int matriz[LINHAS][COLUNAS])
{
    printf("Diagonal Secundaria: ");
    for (int i = 0; i < LINHAS; i++)
    {
        printf("%d ", matriz[i][LINHAS - 1 - i]);
    }
    printf("\n");
}

void imprimirSomaDaLinha4(int matriz[LINHAS][COLUNAS])
{
    int soma = 0;
    for (int j = 0; j < COLUNAS; j++)
    {
        soma += matriz[3][j];
    }
    printf("Soma da Linha 4: %d\n", soma);
}

void imprimirSomaDaColuna2(int matriz[LINHAS][COLUNAS])
{
    int soma = 0;
    for (int i = 0; i < LINHAS; i++)
    {
        soma += matriz[i][1];
    }
    printf("Soma da Coluna 2: %d\n", soma);
}

void imprimirTudoExcetoDiagonalPrincipal(int matriz[LINHAS][COLUNAS])
{
    printf("Tudo exceto a Diagonal Principal: \n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if (i != j)
            {
                printf("%d ", matriz[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int matriz[LINHAS][COLUNAS] = {{1, 2, 3, 4, 5},
                                   {6, 7, 8, 9, 10},
                                   {11, 12, 13, 14, 15},
                                   {16, 17, 18, 19, 20},
                                   {21, 22, 23, 24, 25}};

    imprimirDiagonalPrincipal(matriz);
    imprimirDiagonalSecundaria(matriz);
    imprimirSomaDaLinha4(matriz);
    imprimirSomaDaColuna2(matriz);
    imprimirTudoExcetoDiagonalPrincipal(matriz);

    return 0;
}
