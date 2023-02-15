#include <stdio.h>

int* gerarPares(int arr[], int n, int* m){

    static int pares[100];
    int i, j;

    *m = 0;

    for (i = 0, j = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            pares[j++] = arr[i];
            (*m)++;

        }
    }

    return pares;
}

int main(){

    int n, i, m;
    int arr[100], *pares;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    printf("Digite a sequencia de elementos: %d", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }

    pares = gerarPares(arr, n, &m);

    printf("Os numeros pares na sequencia sao: ");

    for (i = 0; i < m; i++) {
        printf("%d ", pares[i]);

    }

    return 0;
}
