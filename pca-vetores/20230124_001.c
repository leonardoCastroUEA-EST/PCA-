#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    printf("Digite a sequencia de elementos: %d", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("A sequencia de elementos em ordem inversa: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }

    return 0;
}
