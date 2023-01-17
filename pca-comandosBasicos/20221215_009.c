#include <stdio.h>
int main(){

    int numeroInteiro1, numeroInteiro2;
    float numeroReal;
    float resultado1, resultado2, resultado3;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d",&numeroInteiro1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d",&numeroInteiro2);

    printf("Digite um numero real: ");
    scanf("%f",&numeroReal);

    resultado1 = (2 * numeroInteiro1) * ((0.5) * numeroInteiro2);
    resultado2 = (3 * numeroInteiro1) + numeroReal;
    resultado3 = (numeroReal * numeroReal) * numeroReal;

    printf("O produto do dobro do primeiro com metade do segundo e: %.2f \n",resultado1);
    printf("A soma do triplo do primeiro com o terceiro e: %.2f \n",resultado2);
    printf("O terceiro elevado ao cubo equivale a: %.2f",resultado3);

    return 0;
}
