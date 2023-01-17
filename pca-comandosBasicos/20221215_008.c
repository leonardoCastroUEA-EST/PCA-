#include <stdio.h>
int main(){

    float temperaturaEmFarenheit, temperaturaEmCelsius;

    printf("Digite o valor da temperatura em Celsius: ");
    scanf("%f",&temperaturaEmCelsius);

    temperaturaEmFarenheit = (temperaturaEmCelsius * (9/5)) + 32;

    printf("O valor de %.2f graus Celsius em graus Farenheit e: %.2f graus Farenheit",temperaturaEmCelsius, temperaturaEmFarenheit);

    return 0;
}
