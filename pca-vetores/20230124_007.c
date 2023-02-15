#include <stdio.h>

#define NUMERO_DE_FACES 6

int main() {
    int n, i, face;
    int contadores[NUMERO_DE_FACES] = {0};

    printf("Digite o numero de lancamentos: ");
    scanf("%d", &n);

    printf("Digite a sequencia de resultados (1 a 6): ");

    for (i = 0; i < n; i++) {
        scanf("%d", &face);

        if (face >= 1 && face <= 6) {
            contadores[face-1]++;

        } else {
            printf("Lancamento invalido: %d\n", face);

        }

    }

    for (i = 0; i < NUMERO_DE_FACES; i++) {
        printf("Face %d: %d ocorrências\n", i+1, contadores[i]);

    }

    return 0;
}
