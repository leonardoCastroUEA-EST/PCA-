
#include <stdio.h>
int main(){

int condicao;
float notaExercicio1, notaExercicio2, notaExercicio3, media;
float maiorNota1, maiorNota2, maiorNota3, maiorMedia;
char nome[30];

do{

printf("\tDisciplina : Programacao de Computadores e Algoritmos.\n");
printf("Informe o nome do aluno: ");
scanf("%30s",&nome);

printf("Digite as tres notas do aluno %s separadas por espaco: ",nome);
scanf("%f%f%f",&notaExercicio1,&notaExercicio2,&notaExercicio3);

media = (notaExercicio1 + notaExercicio2 + notaExercicio3) / 3;

if(notaExercicio1 > maiorNota1){

    maiorNota1 = notaExercicio1;

}if(notaExercicio2 > maiorNota2){

    maiorNota2 = notaExercicio2;

}if(notaExercicio3 > maiorNota3){

    maiorNota3 = notaExercicio3;

}if(media > maiorMedia){

    maiorMedia = media;

}

printf("Deseja adicionar mais notas?\nDigite [0] para nao e [1] para sim\n");
scanf("%d",&condicao);

}while(condicao == 1);

printf("A maior nota do primeiro exercicio: %.2f\n",maiorNota1);
printf("A maior nota do segunda exercicio: %.2f\n",maiorNota2);
printf("A maior nota do terceiro exercicio: %.2f\n",maiorNota3);
printf("A maior media: %.2f\n",maiorMedia);

return 0;
}
