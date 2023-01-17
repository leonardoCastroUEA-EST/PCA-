#include <stdio.h>
int main(){

	float salario, novoSalario;

	printf("Digite o salario atual: R$ ");
	scanf("%f", &salario);

	novoSalario = (salario * 0.10) + salario;

	printf("Novo salario: R$ %.2f\n",novoSalario);

	return 0;
}
