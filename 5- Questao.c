#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis:

    int opcao;

    // Pergunta ao usuario:

    printf("Choose language: \n");
    printf(" 1- English \n");
    printf(" 2- Espanhol \n");
    printf(" 3- Francês \n");
    scanf("%d", &opcao);
    system("cls");

    switch (opcao)
    {
    case 1:
        printf("Welcome!");
        break;

    case 2:
        printf("Bienvenido!");
        break;
    case 3:
        printf("Accueillir!");
        break;
    default:
        printf("Invalid Option!");
        break;
    }

    return 0;
}