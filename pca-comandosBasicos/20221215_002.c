#include <stdio.h.>
int main(){

    float nota1, nota2, nota3, nota4, media;

    printf("Digite o valor da primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite o valor da segunda nota: ");
    scanf("%f",&nota2);

    printf("Digite o valor da terceira nota: ");
    scanf("%f",&nota3);

    printf("Digite o valor da quarta nota: ");
    scanf("%f",&nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media das notas e: %.2f",media);

    return 0;
}
