#include <stdio.h>
#include <stdbool.h>

#define N 3

bool quadradoMagico(int matriz[N][N])
{
    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    for (int i = 0; i < N; i++)

    {
        int somaDasLinhas = 0, somaDasColunas = 0;
        for (int j = 0; j < N; j++)
        {
            somaDasLinhas += matriz[i][j];
            somaDasColunas += matriz[j][i];

        }

        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][N - 1 - i];

        if (somaDasLinhas != somaDiagonalPrincipal || somaDasLinhas != somaDiagonalSecundaria || somaDasColunas != somaDiagonalPrincipal || somaDasColunas != somaDiagonalSecundaria)
        {
            return false;

        }
    }
    return true;
}

int main()
{
    int matriz[N][N] = {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}};
    
    if (quadradoMagico(matriz))
    {
        printf("E um quadrado magico.\n");
    }
    else
    {
        printf("E um quadrado magico.\n");
    }

    return 0;
}
