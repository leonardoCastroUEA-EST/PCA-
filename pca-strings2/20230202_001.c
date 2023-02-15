#include <stdio.h>
#include <string.h>

#define NUMERO_DE_EQUIPES 5
#define NUMERO_DE_ALUNOS 4
#define TAMANHO_DO_NOME 50

typedef struct
{
    char nome[TAMANHO_DO_NOME];
    char sobrenome[TAMANHO_DO_NOME];

} Aluno;

typedef struct
{
    Aluno alunos[NUMERO_DE_ALUNOS];

} Equipe;

int encontrarEquipe(Equipe equipes[], char nome[], char sobrenome[])
{
    int i, j;

    for (i = 0; i < NUMERO_DE_EQUIPES; i++)
    {
        for (j = 0; j < NUMERO_DE_ALUNOS; j++)
        {
            if (strcmp(equipes[i].alunos[j].nome, nome) == 0 &&
                strcmp(equipes[i].alunos[j].sobrenome, sobrenome) == 0)

            {

                return i + 1;
            }
        }
    }

    return -1; // Equipe não encontrada
}

int main()
{
    Equipe equipes[NUMERO_DE_EQUIPES];
    int i, j;

    for (i = 0; i < NUMERO_DE_EQUIPES; i++)
    {
        printf("Equipe %d:\n", i + 1);

        for (j = 0; j < NUMERO_DE_ALUNOS; j++)
        {
            printf("Aluno %d:\n", j + 1);
            printf("Nome: ");
            scanf("%s", equipes[i].alunos[j].nome);
            printf("Sobrenome: ");
            scanf("%s", equipes[i].alunos[j].sobrenome);
        }
    }

    char nome[TAMANHO_DO_NOME], sobrenome[TAMANHO_DO_NOME];
    printf("Digite o nome e sobrenome do aluno: ");
    scanf("%s %s", nome, sobrenome);
    int equipe = encontrarEquipe(equipes, nome, sobrenome);

    if (equipe == -1)
    {
        printf("Aluno não encontrado.\n");
    }
    else
    {
        printf("O aluno está na equipe %d.\n", equipe);
    }

    return 0;
}
