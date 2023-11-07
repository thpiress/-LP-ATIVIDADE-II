#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    // Declarando variaveis:
    
    int numero;
    int i;
    int primo = 0;

    // Pergunta ao ussuario:

    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Vendo se é primo:

    for (i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            primo++;
            break;
        }
        
    }
    
    if (primo == 0)
    {
        printf("%d e um numero primo!", numero);
    } else {
        printf("%d nao e um numero primo!", numero);
    }
    

    return 0;
}