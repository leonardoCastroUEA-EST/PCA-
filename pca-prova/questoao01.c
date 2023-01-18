#include <stdio.h>
void main(){

    int notaAluno, maiorNota, menorNota, mediaParcial, mediaFinal;
    int divisor = 1;
    int i = 0;

    do{
        printf("Digite a sua nota final: ");
        scanf("%d",&notaAluno);

        if(i < 1 && notaAluno >= 0){

            menorNota = notaAluno;
            i++;

        }

        if(notaAluno > maiorNota && notaAluno >= 0){

            maiorNota = notaAluno;

        }
        if(notaAluno < menorNota && notaAluno >= 0){

            menorNota = notaAluno;

        }
        if(notaAluno >= 0){

            mediaParcial += notaAluno;
            mediaFinal = mediaParcial / divisor;

        }

        divisor++;

    }while(notaAluno >= 0);

    printf("A maior nota encontrada e: %d\n",maiorNota);
    printf("A menor nota encontrada e: %d\n",menorNota);
    printf("A media de todas as notas finais e: %d\n",mediaFinal);
}
