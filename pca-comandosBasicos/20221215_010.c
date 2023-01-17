#include <stdio.h>
int main(){

    float altura, pesoIdeal;

    printf("Digite a sua altura: ");
    scanf("%f",&altura);

    pesoIdeal = (72.7 * altura) - 58;

    printf("O seu peso ideal equivale a: %.2f kg",pesoIdeal);

    return 0;
}
