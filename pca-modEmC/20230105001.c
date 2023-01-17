#include <stdio.h>

int calculaMaior(int x, int y){

    int maior;

    if(x > y){

        maior = x;

    }else if(y > x){

        maior = y;

    }else{

        return "Valores iguais";

    }
    return maior;
}

int main(){

    int numero01, numero02;

    printf("Digite um valor referente a x: ");
    scanf("%d", &numero01);

    printf("Digite um valor referente a y: ");
    scanf("%d", &numero02);

    printf("Maior valor: %d",calculaMaior(numero01, numero02));

    return 0;
}
