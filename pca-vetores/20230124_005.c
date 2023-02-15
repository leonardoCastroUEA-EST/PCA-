#include <stdio.h>

int fatorial(int num) {
    int i, resultado = 1;

    for (i = 2; i <= num; i++) {
        resultado *= i;

    }

    return resultado;
}

void sequenciaFatorial(int seq[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        seq[i] = fatorial(seq[i]);

    }
}

int main() {
    int n, i;
    int seq[100];

    printf("Digite o numero de elementos da sequencia (menor que 100): ");
    scanf("%d", &n);

    printf("Digite a sequencia de %d numeros: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &seq[i]);

    }

    sequenciaFatorial(seq, n);

    printf("A sequencia de fatoriais: ");
    for (i = 0; i < n; i++) {
        printf("%d ", seq[i]);
    }

    return 0;
}

