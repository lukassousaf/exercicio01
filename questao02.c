#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int valor;
    printf("Digite um número: ");
    scanf("%d", &valor);
    if (valor % 2 == 1)
        printf("O número é ímpar!");
    else
        printf("O número é par!");
    printf("\n");
    return 0;
}