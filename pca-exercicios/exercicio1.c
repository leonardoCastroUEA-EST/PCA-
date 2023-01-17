#include <stdio.h>
int main(){

    float base, altura, area;

    printf("digite o valor da base: ");
    scanf("%f",&base);

    printf("digite o valor da altura: ");
    scanf("%f",&altura);

    area = (base * altura)/2;

    printf("A area do triangulo e: %.2f",area);

    return 0;
}
