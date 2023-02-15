#include <stdio.h>
#include <string.h>
void main(){

char nomes[5][50] = {("Joao"), ("Sara"), ("Adria"), ("Mauro"), ("Sandra")};
char prioridades[5] = {('N'), ('N'), ('S'), ('N'), ('S')};

char nome[50] = "Sara";
char nomesPrior[5][50];

int counter = 0;


    for(int i = 0 ; i < 5 ; i++){
        if(strcmp(nome, nomes[i]) == 0){
            printf("posicao %d \n", i + 1);
        }
    }
    for(int j = 0 ; j < 5 ; j++){
        if(prioridades[j] == 'S'){
            strcpy(nomesPrior[counter], nomes[j]);
            counter++;
        }
    }
    for(int k = 0 ; k < counter ; k++){
        printf("%s \n", nomesPrior[k]);
    }
}
