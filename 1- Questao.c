#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis:
    int graus;

    // temperatura:

    printf("Qual a temperatura externa?");
    scanf("%d", &graus);

    if (graus > 25)
    {
        printf("Clima Ensolarado!");
    }

    if (graus < 15)
    {
        printf("Clima Chuvoso!");
    }

    if (graus <= 25)
    {
        printf("Clima nublado!");
    }

    return 0;
}