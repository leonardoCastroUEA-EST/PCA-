#include <stdio.h>
void main(){

float valor,maior_valor,menor_valor;

for(int i = 1 ; i <= 1 ; i++){

    printf("Digite um numero real: ");
    scanf("%f",&valor);

    menor_valor = valor;

    for(int j = 1 ; j <=14 ; j++){

        printf("Digite um numero real: ");
        scanf("%f",&valor);

        if(valor > maior_valor){

            maior_valor = valor;

        }if(valor < menor_valor){

            menor_valor = valor;

        }

    }

}

printf("O maior valor dentre os 15 numeros e: %.2f\n5",maior_valor);
printf("O menor valor dentre os 15 numeros e: %.2f\n",menor_valor);

}
