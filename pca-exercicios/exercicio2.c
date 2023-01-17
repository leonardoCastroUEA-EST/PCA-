#include <stdio.h>
int main(){
	char nome[30];
	int idade;
	char sexo;

	printf("\nInsira seu sexo F ou M:  ");
	scanf("%c", &sexo);

	printf("\nQual o seu nome? ");
	scanf("%s", &nome);

	printf("\nQual a sua idade? ");
	scanf("%i", &idade);

	if(sexo == 'F'){

		printf("\nnome: %s", nome);
		printf("\nidade: %i", idade);
		printf("\nsexo: %c, é mulher", sexo);

	}else{

		printf("\nnome: %s", nome);
		printf("\nidade: %i", idade);
		printf("\nsexo: %c, nao é mulher", sexo);

	}

	return 0;
}
