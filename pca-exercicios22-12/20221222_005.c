#include <stdio.h>
void main(){

float soma = 0;

for(float i = 1 ; i <= 99 ; i++){

    soma += (i+i-1) / i;
    printf("%.2f\n",soma);
}

printf("O resultado da soma e: %.2f\n",soma);

}
