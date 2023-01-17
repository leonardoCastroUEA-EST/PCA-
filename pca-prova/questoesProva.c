#include <stdio.h>
void main(){

    int notaAluno, maiorNota, menorNota = 10, mediaParcial, mediaFinal;
    int divisor = 1;

    do{
        printf("Digite a sua nota final: ");
        scanf("%d",&notaAluno);

        if(notaAluno > maiorNota){

            maiorNota = notaAluno;

        }
        if(notaAluno < menorNota){

            menorNota = notaAluno;

        }

        mediaParcial += notaAluno;
        mediaFinal = mediaParcial / divisor;

        divisor++;

    }while(notaAluno >= 0);

    printf("A maior nota encontrada e: %d\n",maiorNota);
    printf("A menor nota encontrada e: %d\n",menorNota);
    printf("A media de todas as notas finais e: %d\n",mediaFinal);
}
