#include <stdio.h>
void main(){

int numero_positivo,soma_pares = 0,soma_impares = 0;

do{

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&numero_positivo);

    if(numero_positivo % 2 == 0){

        soma_pares += numero_positivo;

    }else{

        soma_impares += numero_positivo;

    }

}while(numero_positivo <= 1000);

printf("A soma dos numeros pares e: %d\n",soma_pares);
printf("A soma dos numeros impares e: %d\n",soma_impares - numero_positivo);

}
