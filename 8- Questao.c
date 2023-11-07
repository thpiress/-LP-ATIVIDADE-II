#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis:

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        switch (numero)
        {
        case 0:
            printf("0\n");
            break;
        case 1:
            printf("1\n");
            break;
        default:
            printf("%d...\n", numero);
            break;
        }
        numero--;
    }

    return 0;
}
