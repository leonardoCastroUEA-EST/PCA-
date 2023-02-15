#include <stdio.h>

void somaDeMatrizes(int matriz1[3][5], int matriz2[3][5])
{
    int i, j;

    printf("Resultado da soma das matrizes: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", matriz1[i][j] + matriz2[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz1[3][5] = {{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15}};

    int matriz2[3][5] = {{16, 17, 18, 19, 20},
                         {21, 22, 23, 24, 25},
                         {26, 27, 28, 29, 30}};

    somaDeMatrizes(matriz1, matriz2);

    return 0;
}
