#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Variaveis:

    int idade;

    // Pergunta ao usuario:

    printf("Digite a idade do usuario: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Acesso permitido!");
    }
    else
    {
        printf("Acesso Negado!");
    }

    return 0;
}