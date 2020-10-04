#include <stdio.h>
#include <string.h>
#define LIM 80
#define FALSE 0
#define TRUE 1

int palindromo(char verso[LIM])
{
    int i = 0, n = strlen(verso), k = n / 2, cond = TRUE;
    while (cond && i < k)
    {
        cond = verso[i] == verso[n - i - 1];
        i = i + 1;
    }
    return cond;
}

int main(void)
{
    char verso[LIM];
    printf("Digite uma palavra: ");
    gets(verso);
    if (palindromo(verso))
        printf("É palíndromo\n");
    else
        printf("Não é palíndromo\n");
    return 0;
}
