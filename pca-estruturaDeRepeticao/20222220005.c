#include <stdio.h>
void main(){

int numero, maiorNumero, menorNumero;

for(int i = 0 ; i < 1 ; i++){

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&numero);

    if(numero >= 0){

        maiorNumero = numero;
        menorNumero = numero;

        for(int j = 1 ; j <= 4 ; j++){

            printf("Digite um numero inteiro qualquer: ");
            scanf("%d",&numero);

            if(numero >= 0){

                if(numero > maiorNumero){

                    maiorNumero = numero;

                }else if(numero < menorNumero){

                    menorNumero = numero;

                }
            }else{

                printf("Somente numeros inteiros positivos!");

                break;

            }
        }
    }else{

        printf("Valido somente numeros positivos!");

    }
}
}
