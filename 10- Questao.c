#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Variaveis:

    int primeiroNumero;
    int segundoNumero;
    int resultado;
    char opcao;

    // Pergunta ao usuario:

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);

    fflush(stdin); // Limpa o cache de input.

    printf("Digite + para somar \n");
    printf("Digite - para subtrair \n");
    scanf("%c", &opcao);
    system("cls");

    // Escolha:

    switch (opcao)
    {
    case '+':
        resultado = primeiroNumero + segundoNumero;
        break;
    case '-':
        resultado = primeiroNumero - segundoNumero;
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    // Resultado ao usuario:

    printf("Resultado: %d", resultado);

    return 0;
}