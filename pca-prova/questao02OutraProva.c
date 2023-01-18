#include <stdio.h>
#include <math.h>

<<<<<<< HEAD
int solicitarNumeroInteiro(int numeroInteiroPositivo){

    if(numeroInteiroPositivo >= 0){

        return numeroInteiroPositivo;

    }else{

        printf("Valor fora do intervalo solicitado!: \n");

    }
=======
int solicitarNumeroInteiro(int inteiroPositivo){

    do{

        if(inteiroPositivo >= 0){

            return inteiroPositivo;

        }

        printf("Valor fora do intervalo solicitado!: \n");

    }while(inteiroPositivo < 0);
>>>>>>> a194638433b6cc2e65067a6a94a771736ba32589

}

int hiperfatorial(int numeroInteiroPositivo){

<<<<<<< HEAD
    int hiperfatorialDoNum;

    for(int i = 0 ; i <= numeroInteiroPositivo ; i++){

        hiperfatorialDoNum += pow(i, i);

    }

    return hiperfatorialDoNum;
=======
    int hiperfatorialNum;

    for(int i = 0 ; i <= numeroInteiroPositivo ; i++){

        hiperfatorialNum += pow(i, i);

    }

    return hiperfatorialNum;
>>>>>>> a194638433b6cc2e65067a6a94a771736ba32589
}

void imprimirMensagem(){

    int numero, x, y;

<<<<<<< HEAD
    printf("Digite um numero inteiro positivo: ", numero);
    scanf("%d",&numero);
=======
    printf("Numero inserido: %d\n", numero);
>>>>>>> a194638433b6cc2e65067a6a94a771736ba32589

    x = solicitarNumeroInteiro(numero);
    y = hiperfatorial(x);

    printf("O Hiperfatorial do numero %d e: %d\n", x, y);

}
void main(){

    imprimirMensagem();

}
