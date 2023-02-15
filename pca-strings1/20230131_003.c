#include <stdio.h>
#include <ctype.h>

int eDigito(char c)
{

    return (c >= '0' && c <= '9');
}

int converteDigito(char c)
{

    return (int)(c - '0');
}

int main()
{
    char data[11];
    int dia, mes, ano;

    printf("Digite uma data no formato DD/MM/YYYY: ");
    fgets(data, 11, stdin);

    if (data[2] != '/' || data[5] != '/')
    {
        printf("Formato de data incorreto. Use DD/MM/YYYY.\n");

        return 1;
    }

    if (!eDigito(data[0]) || !eDigito(data[1]) || !eDigito(data[3]) ||
        !eDigito(data[4]) || !eDigito(data[6]) || !eDigito(data[7]) ||
        !eDigito(data[8]) || !eDigito(data[9]))
    {

        printf("A data deve conter apenas digitos numericos.\n");

        return 1;
    }

    dia = converteDigito(data[0]) * 10 + converteDigito(data[1]);
    mes = converteDigito(data[3]) * 10 + converteDigito(data[4]);
    ano = converteDigito(data[6]) * 1000 + converteDigito(data[7]) * 100 +
          converteDigito(data[8]) * 10 + converteDigito(data[9]);

    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
