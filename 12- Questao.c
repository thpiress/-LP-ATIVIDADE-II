#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis:

    float media;
    int soma;
    int i;
    int nota;

    // Laço de repetição:

    for (i = 1; i <= 3; i++)
    {
        do
        {

            printf("Digite o %dº nota: ", i);
            scanf("%d", &nota);

            if (nota < 0 || nota > 10)
            {
                printf("Nota inválida. \n Digite a nota novamente... \n");
            }
        } while (nota < 0 || nota > 10);

        // Calculo:

        soma += nota;
        media = soma / i;
    }

    // Resultado :

    printf("Media do aluno: %.1f", media);

    return 0;
}