#include <stdio.h>
void main(){

    float menor, maior, media, cont, soma, numero;

    maior = 0;
    media = 0;
    soma = 0;
    cont = 0;

    printf("Uma media: ");
    scanf ("%f",&numero);

    menor = numero;

    while(numero >= 0){

        if (numero > maior){

            maior=numero;

        }

        if (numero < menor){

            menor = numero;

        }

        soma += numero;
        cont += 1;
        printf("Uma media: ");
        scanf ("%f",&numero);

    }

    printf ("\nMenor: %.2f", menor < 0 ? 0 : menor);
    printf ("\nMaior: %.2f", maior);
    printf ("\nMedia: %.2f", cont > 0 ? (soma/cont):0);

}
