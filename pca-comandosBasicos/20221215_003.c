#include <stdio.h>
int main(){

    float metros, centimetros;

    printf("digite o valor referente a metros: ");
    scanf("%f",&metros);

    centimetros = metros * 100;

    printf("%.2f metros em centimetros equivale a: %.1f cm",metros, centimetros);

    return 0;
}