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
    printf(" 1- Novo Jogo \n");
    printf(" 2- Carregar Jogo \n");
    printf(" 3- Configuraçoes \n");
    scanf("%d", &opcao);
    system("cls");

    switch (opcao)
    {
    case 1:
        printf("Carregando Novo Jogo... \n");
        printf("Aperte Start para começar \n");
        break;

    case 2:
        printf("Aguarde... \n");
        printf("Carregando jogo anterior... \n");
        break;
    case 3:
        printf("Menu de Configurações \n");
        printf("  - Alterar Idioma \n");
        printf("  - Gráficos \n");
        printf("  - Controles \n");
        break;
    default:
        printf("Invalid Option!");
        break;
    }

    return 0;
}