#include <stdio.h>
int main(){

    float temperaturaEmFarenheit, temperaturaEmCelsius;

    printf("Digite o valor da temperatura em farenheit: ");
    scanf("%f",&temperaturaEmFarenheit);

    temperaturaEmCelsius = (temperaturaEmFarenheit - 32) * 0.55;

    printf("O valor de %.2f graus Farenheit em graus Celsius e: %.2f graus Celsius",temperaturaEmFarenheit, temperaturaEmCelsius);

    return 0;
}
