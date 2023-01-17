#include <stdio.h>
int main(){

	float valorDaConta, porcentagemDoGarcom;

	printf("Digite o valor da conta: R$ ");
	scanf("%f", &valorDaConta);

	porcentagemDoGarcom = 0.10 * valorDaConta;

	printf("\nValor da conta: R$ %.2f",valorDaConta);
	printf("\nPorcentagem do garcom: R$ %.2f", porcentagemDoGarcom);

}
