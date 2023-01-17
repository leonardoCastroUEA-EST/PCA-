#include <stdio.h>
int main(){

    float primeiroNumero, segundoNumero, soma;

    printf("digite o primeiro numero: ");
    scanf("%f",&primeiroNumero);

    printf("digite o segundo numero: ");
    scanf("%f",&segundoNumero);

    soma = primeiroNumero + segundoNumero;

    printf("%.2f + %.2f : %.2f", primeiroNumero, segundoNumero, soma);

    return 0;
}