#include <stdio.h>
int main(){

    int horasTrabalhadasNoMes;
    float ganhoPorHora, salarioBruto, salarioLiquido;
    float porcentagemImpostoDeRenda, porcentagemINSS, porcentagemSindicato;
    float onzePorcento, oitoPorcento, cincoPorcento;


    printf("Digite quanto voce ganha por hora: ");
    scanf("%f",&ganhoPorHora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%d",&horasTrabalhadasNoMes);

    salarioBruto = ganhoPorHora * horasTrabalhadasNoMes;

    onzePorcento = 0.11;
    oitoPorcento = 0.08;
    cincoPorcento = 0.05;

    porcentagemImpostoDeRenda = salarioBruto * onzePorcento;
    porcentagemINSS = salarioBruto * oitoPorcento;
    porcentagemSindicato = salarioBruto * cincoPorcento;

    salarioLiquido = salarioBruto - (porcentagemImpostoDeRenda + porcentagemINSS + porcentagemSindicato);

    printf("O valor referente ao salario bruto e: R$%.2f reais \n",salarioBruto);
    printf("O valor pago ao INSS: R$%.2f reais \n",porcentagemINSS);
    printf("O valor pago ao sindicato: R$%.2f reais \n",porcentagemSindicato);
    printf("O valor referente ao salario liquido: R$%.2f reais",salarioLiquido);

    return 0;
}
