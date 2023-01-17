#include <stdio.h>
void main(){

int numero, maiorNumero, menorNumero;

for(int i = 0 ; i < 1 ; i++){

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d",&numero);

    maiorNumero = numero;
    menorNumero = numero;

    for(int j = 1 ; j <= 19 ; j++){

        printf("Digite um numero inteiro qualquer: ");
        scanf("%d",&numero);

        if(numero > maiorNumero){

            maiorNumero = numero;

        }else if(numero < menorNumero){

            menorNumero = numero;

        }
    }

}

printf("O valor equivalente ao maior dos vinte numeros e: %d\n",maiorNumero);
printf("O valor equivalente ao menor dos vinte numeros e: %d\n",menorNumero);

}
