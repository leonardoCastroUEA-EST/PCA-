#include <stdio.h>
int main(){

int numero,soma;

for(int i = 1 ; i <= 49 ; i++){

    printf("Digite um numero par ou impar: ");
    scanf("%d",&numero);

    if(numero % 2 != 0){

        soma += numero;

    }

}

printf("O resultado da soma dos numeros impares e: %d",soma);

return 0;
}
