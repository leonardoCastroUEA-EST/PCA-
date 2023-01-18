#include <stdio.h>
#include <math.h>

int solicitarNumeroInteiro(int numeroInteiroPositivo){

    if(numeroInteiroPositivo >= 0){

        return numeroInteiroPositivo;

    }else{

        printf("Valor fora do intervalo solicitado!: \n");

    }

}

int hiperfatorial(int numeroInteiroPositivo){

    int hiperfatorialDoNum;

    for(int i = 0 ; i <= numeroInteiroPositivo ; i++){

        hiperfatorialDoNum += pow(i, i);

    }

    return hiperfatorialDoNum;
}

void imprimirMensagem(){

    int numero, x, y;

    printf("Digite um numero inteiro positivo: ", numero);
    scanf("%d",&numero);

    x = solicitarNumeroInteiro(numero);
    y = hiperfatorial(x);

    printf("O Hiperfatorial do numero %d e: %d\n", x, y);

}
void main(){

    imprimirMensagem();

}
