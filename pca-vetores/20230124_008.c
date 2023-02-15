#include <stdio.h>

double produtoEscalar(double x[], double y[], int n) {
    double prodEscalar = 0.0;
    int i;

    for (i = 0; i < n; i++) {
        prodEscalar += x[i] * y[i];

    }

    return prodEscalar;
}

int main() {
    double x[] = {1.0, 2.0, 3.0};
    double y[] = {4.0, 5.0, 6.0};
    int n = 3;

    double prodEscalar = produtoEscalar(x, y, n);

    printf("O produto escalar de x e y e: %.2f\n", prodEscalar);

    return 0;
}
