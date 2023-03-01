#include <stdio.h>
#include <string.h>


int main(){
    char nomes[2][6][30] = {{"Joao", "Alex", "Leandro", "Isabela", "Gabriel", "Paula"}, {"Juliane", "Camila", "Alberto", "Henrique", "Julio", "Larissa"}};
    char sexo[2][6] = {{{'M'}, {'M'}, {'M'}, {'F'}, {'M'}, {'F'}}, {{'F'}, {'F'}, {'M'}, {'M'}, {'M'}, {'F'}}};
    float notas[2][6] = {{{6.1}, {5.5}, {8.3}, {8.5}, {9.2}, {6.2}}, {{4.3}, {3.5}, {7.6}, {8.0}, {9.5}, {8.5}}};

    int quantMulheresEquipe1 = 0, quantMulheresEquipe2 = 0;

    int contador = 0;
    char alunasProjeto[1][contador][30];

    for(int i = 0 ; i < 6 ; i++){
            if(sexo[0][i] == 'F'){
                    quantMulheresEquipe1++;
            }
            if(sexo[1][i] == 'F'){
                    quantMulheresEquipe2++;
            }
            if(sexo[0][i] == 'F' && notas[0][i] >= 8){
                strcpy(alunasProjeto[0][contador], nomes[0][i]);
                contador++;
            }
            if(sexo[1][i] == 'F' && notas[1][i] >= 8){
                strcpy(alunasProjeto[0][contador], nomes[1][i]);
                contador++;
            }
    }
    if(quantMulheresEquipe1 > quantMulheresEquipe2){
            printf("A equipe 1 tem %d mulheres a mais que a equipe 2\n", quantMulheresEquipe1 - quantMulheresEquipe2);
    }else if(quantMulheresEquipe2 > quantMulheresEquipe1){
            printf("A equipe 2 tem %d mulheres a mais que a equipe 1\n", quantMulheresEquipe2 - quantMulheresEquipe1);

    }else{
        printf("Mesma quantidade de mulheres em ambas as equipes!");
    }

    printf("Alunas que podem participar do projeto:\n");
    for(int i = 0 ; i < contador ; i++){
        printf("%s\n", alunasProjeto[0][i]);

    }


}
