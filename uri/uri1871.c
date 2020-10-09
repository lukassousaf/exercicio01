#include <stdio.h>

int main()
{
    char c[21];
    long int valor1, valor2, soma, l, x;

    while (1)
    {
        scanf("%d %d", &valor1, &valor2);
        if (valor1 == 0 && valor2 == 0)
        {
            break;
        }

        soma = valor1 + valor2;
        l = sprintf(c, "%d", soma);

        c[l + 1] = '\0';

        for (x = 0; x < l; x++)
        {
            if (c[x] != '0')
            {
                printf("%c", c[x]);
            }
        }
        
        printf("\n");
    }
    return 0;
}