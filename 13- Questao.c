#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis:

    int numero1;
    int numero2;

    // Perunta ao usuario:

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // MAIOR NUMERO:

    if (numero1 > numero2)
    {
        printf("Seu maior numero é: %d \n", numero1);
    }
    else
    {
        printf("Seu maior numero é: %d \n", numero2);
    }

    // mENOR NUMERO:

    if (numero1 < numero2)
    {
        printf("Seu menor numero é: %d \n", numero1);
    }
    else
    {
        printf("Seu menor numero é: %d \n", numero2);
    }

    return 0;
}