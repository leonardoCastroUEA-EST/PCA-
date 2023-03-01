#include <stdio.h>
#include <string.h>

void main(){

char nomes[5][120] = {"Joao", "Sara", "Adria", "Mauro", "Sandra"};
char prioridades[5] = {'N', 'N', 'S', 'N', 'S'};

char nome[20];

char nomesPrioridade[5][120];

int contador = 0;

printf("Digite um nome: ");
scanf("%s", nome);

for(int i = 0 ; i < 5 ; i++){
    if(strcmp(nomes[i], nome) == 0){
        printf("Achou o nome %s na posicao %d\n", nome, i + 1);

    }
}
for(int j = 0 ; j < 5 ; j++){
    if(prioridades[j] == 'S'){
        strcpy(nomesPrioridade[contador], nomes[j]);
        contador++;
    }
}

printf("Nomes com prioridade: \n");

for(int k = 0 ; k < contador ; k++){
    printf("%s\n", nomesPrioridade[k]);

}

}
