#include <stdio.h>
#include <string.h>
#include <ctype.h>

int eUmPalindromo(char *str)
{
    int i, j;
    int tamanho = strlen(str);

    for (i = 0, j = tamanho - 1; i < j; i++, j--)
    {
        while (!isalnum(str[i]) && i < j)
            i++;
        while (!isalnum(str[j]) && i < j)
            j--;

        if (tolower(str[i]) != tolower(str[j]))
        {

            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Digite uma palavra: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    if (eUmPalindromo(str))
    {
        printf("A string \"%s\" e um palíndromo.\n", str);
    }
    else
    {
        printf("A string \"%s\" nao e um palíndromo.\n", str);
    }

    return 0;
}
