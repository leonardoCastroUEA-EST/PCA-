#include <stdio.h>
#include <math.h>

int solicitarNumeroInteiro(int inteiroPositivo){

    do{

        if(inteiroPositivo >= 0){

            return inteiroPositivo;

        }

        printf("Valor fora do intervalo solicitado!: \n");

    }while(inteiroPositivo < 0);

}

int hiperfatorial(int numeroInteiroPositivo){

    int hiperfatorialNum;

    for(int i = 0 ; i <= numeroInteiroPositivo ; i++){

        hiperfatorialNum += pow(i, i);

    }

    return hiperfatorialNum;
}

void imprimirMensagem(){

    int numero, x, y;

    printf("Numero inserido: %d\n", numero);

    x = solicitarNumeroInteiro(numero);
    y = hiperfatorial(x);

    printf("O Hiperfatorial do numero %d e: %d\n", x, y);

}
void main(){

    imprimirMensagem();

}
