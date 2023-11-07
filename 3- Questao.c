#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis:

    float nota;

    // Pergunta ao ususario:

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        printf("Nota Excelente!");
    }
    else
    {
        if (nota < 5)
        {
            printf("Nota Insuiciente!");
        }
        else
        {
            if (nota <= 6.9)
            {
                printf("Nota Razoável!");
            }
            else
            {
                if (nota <= 8.9)
                {
                    printf("Nota Boa!");
                }
            }
        }
    }

    return 0;
}