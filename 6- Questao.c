#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis:
    int opcao;

    // Pergunta ao usuario:

    printf("Escolha o Produto desejado: \n");
    printf(" 1- Camiseta \n");
    printf(" 2- Calça \n");
    printf(" 3- Sapato \n");
    scanf("%d", &opcao);
    system("cls");

    switch (opcao)
    {
    case 1:
        printf("Produto Escolhido: Camiseta \n");
        printf("Preço: R$ 25,00 \n");
        break;

    case 2:
        printf("Produto Escolhido: Calça \n");
        printf("Preço: R$ 30,00 \n");
        break;
    case 3:
        printf("Produto Escolhido: Sapato \n");
        printf("Preço: R$ 15,00 \n");
        break;
    default:
        printf("Invalid Option!");
        break;
    }

    return 0;
}