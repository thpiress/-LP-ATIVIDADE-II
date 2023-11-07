#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // declarando variaveis:

    int senhaSalva = "1234";
    int senha;

    // Dados do usuario:
    do
    {

        printf("Digite sua senha: ");
        gets(senha);

        // Strcmp:
        if (strcmp(senha, senhaSalva) == 0)
        {
            printf("Bem vindo!");
        }
        else
        {
            printf("Acesso negado!");
        }

    } while (senha < senhaSalva);

    return 0;
}