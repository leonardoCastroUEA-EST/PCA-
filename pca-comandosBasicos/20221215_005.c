#include <stdio.h>
int main(){

    float lado, area;

    printf("Digite o valor da medida do lado do quadrado em centimetros: ");
    scanf("%f",&lado);

    area = lado * lado;

    printf("O valor da area do quadrado equivale a: %.2f cm2",area);

    return 0;
}
