#include <stdio.h>
int main(){

int numero,soma;

for(int i = 1 ; i <= 50 ; i++){

    printf("Digite um numero par ou impar: ");
    scanf("%d",&numero);

    if(numero % 2 != 0){

        if(numero > 100 && numero < 200){
            soma += numero;

        }

    }

}

printf("O resultado da soma dos numeros impares entre 100 e 200 e: %d",soma);

return 0;
}
