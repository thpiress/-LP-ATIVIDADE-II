#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis:

    int contador = 0;
    float soma = 0;
    float mediaPar;
    int numero;
    int pares = 0;
    int impares = 0;
    float mediaImpar;

    // Laço de repetição:
    do
    {
        printf("Digite o %dº número: ", contador);
        scanf("%d", &numero);
    
    // Numeros Pares:

        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares += 1;
        }

    } while (numero > 0);

    printf("\n Quantidade de números pares: %d \n", pares);
    printf("\n Quantidade de números impares: %d \n", impares);

    return 0;
}