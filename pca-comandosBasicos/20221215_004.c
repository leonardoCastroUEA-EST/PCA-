#include <stdio.h>
int main(){

    float raio, area;
    const pi = 3.14;

    printf("Digite o valor do raio: ");
    scanf("%f",&raio);

    area = pi * (raio * raio);

    printf("A area do circulo equivale a: %.2f",area);

    return 0;
}
