#include <stdio.h>
int main(){

    float ganhoPorHora, salario;
    int horasTrabalhadasNoMes;

    printf("Digite quanto voce ganha por hora: ");
    scanf("%f",&ganhoPorHora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%d",&horasTrabalhadasNoMes);

    salario = ganhoPorHora * horasTrabalhadasNoMes;

    printf("O valor referente ao salario e: R$%.2f reais",salario);

    return 0;
}
