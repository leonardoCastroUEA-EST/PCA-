#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){

    char goleiros[3][30] = {"Santos", "Hugo Souza", "Matheus Cunha" };
    int golPontuacao[3] = {};
    int maiorPontuacao = 0;
    char melhorGol[1][30] = {};

    char zagueiros[7][30] = {"Leo Pereira", "Rodrigo Caio", "David Luiz", "Fabricio Bruno", "Matheuzinho", "Filipe Luis", "Ayrton Lucas"};
    int zagPontuacao[7] = {};

    char meiosCampo[8][30] = {"Arturo Vidal", "Thiago Maia", "Erick", "Gerson", "Everton Ribeiro", "De Arrascaeta", "Victor Hugo", "Matheus Franca" };
    int meiPontuacao[8] = {};

    char atacantes[5][30] = {"Gabigol", "Bruno Henrique", "Pedro", "Marinho", "Everton",};
    int ataPontuacao[5] = {};

    // Preenchendo pontuacao dos jogadores
    for (int i = 0 ; i < 3 ; i++){
        golPontuacao[i] = rand() % 10;
    }
    for (int i = 0 ; i < 7 ; i++){
        zagPontuacao[i] = rand() % 10;
    }
    for (int i = 0 ; i < 8 ; i++){
        meiPontuacao[i] = rand() % 10;
    }
    for (int i = 0 ; i < 5 ; i++){
        ataPontuacao[i] = rand() % 10;
    }

    // Mostrando pontuacao dos jogadores
    // Goleiros
    printf("Goleiros\n");
    for(int i = 0 ; i < 3 ; i++){
        printf("%s: %d\n", goleiros[i], golPontuacao[i]);

    }
    // Zagueiros
    printf("\nZagueios\n");
    for(int i = 0 ; i < 7 ; i++){
        printf("%s: %d\n", zagueiros[i], zagPontuacao[i]);

    }
    //Meias
    printf("\nMeios-Campo\n");
    for(int i = 0 ; i < 8 ; i++){
        printf("%s: %d\n", meiosCampo[i], meiPontuacao[i]);

    }
    //Atacantes
    printf("\nAtacantes\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%s: %d\n", atacantes[i], ataPontuacao[i]);

    }

    //Pegando as maiores pontuacoes

    for(int i = 0 ; i < 3 ; i++){
        if(golPontuacao[i] > maiorPontuacao){
            strcpy(melhorGol[0], goleiros[i]);
        }
    }
    for(int i = 0 ; i < 7 ; i++){

    }
    for(int i = 0 ; i < 7 ; i++){

    }
    for(int i = 0 ; i < 7 ; i++){

    }
    for(int i = 0 ; i < 7 ; i++){

    }
    for(int i = 0 ; i < 8 ; i++){

    }
    for(int i = 0 ; i < 8 ; i++){

    }
    for(int i = 0 ; i < 8 ; i++){

    }
    for(int i = 0 ; i < 8 ; i++){

    }
    for(int i = 0 ; i < 5 ; i++){

    }
    for(int i = 0 ; i < 5 ; i++){

    }

    printf("%s", melhorGol[0]);
}
