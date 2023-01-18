#include <stdio.h>
#include <math.h>

float solicitarNumero(float numeroRealPositivo){

    if(numeroRealPositivo >= 0){

        return numeroRealPositivo;

    }
    else{

        printf("Valor fora do intervalo!");

    }

}

float arcTan(float numeroRealX){

    float arcoTangente;
    int expoenteDivisor = 1;

    do{

        arcoTangente += (pow(numeroRealX, expoenteDivisor) / expoenteDivisor) - (pow(numeroRealX, expoenteDivisor + 2) / expoenteDivisor + 2);
        expoenteDivisor + 4;

    }while(arcoTangente >= 0.0001);

    return arcoTangente;
}

void imprimirMensagem(){

    float numeroReal;
    float arcoTangente, x;

    printf("Digite um numero real entre 0 e 1: ");
    scanf("%f",&numeroReal);

    x = solicitarNumero(numeroReal);
    arcoTangente = arcTan(x);

    printf("Numero real x: %.10f\n",x);
    printf("Arco tangente de x: %.10f\n",arcoTangente);

}

int main(){

    imprimirMensagem();

}
