#include <stdio.h>
#include <string.h>

void imprimeAoContrario(char *palavra)
{
    int tamanho = strlen(palavra);

    for (int i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", palavra[i]);

    }

    printf("\n");
}

void imprimeSemVogais(char *string)
{
    int tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++)
    {
        char c = string[i];

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
        {
            printf("%c", c);

        }
    }

    printf("\n");
}

void converteParaMaiuscula(char *string)
{
    int tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - ('a' - 'A');

        }

    }
}

int contaOcorrencias(char *string, char caractere)
{
    int tamanho = strlen(string);
    int contador = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (string[i] == caractere)
        {
            contador++;

        }

    }

    return contador;
}

void removeCaractere(char *string, char caractere)
{
    int tamanho = strlen(string);
    int j = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (string[i] != caractere)
        {
            string[j] = string[i];
            j++;

        }

    }

    string[j] = '\0';
}

int main()
{
    char palavra[100] = "paralelepipedo";
    char string1[100] = "O rato roeu a roupa do rei de roma!";
    char string2[100] = "Todas maiusculas";
    char string3[100] = "A letra 'a' aparece quantas vezes nesta string?";
    char string4[100] = "Removendo todas as letras 'a' desta string.";

    printf("Palavra ao contrário: ");
    imprimeAoContrario(palavra);

    printf("String sem vogais: ");
    imprimeSemVogais(string1);

    printf("String em maiúsculas: ");
    converteParaMaiuscula(string2);
    printf("%s\n", string2);

    char caractere = 'o';
    int ocorrencias = conta
}
