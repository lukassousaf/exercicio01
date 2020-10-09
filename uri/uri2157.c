#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, c, i, j, imprime, tamanho;
    int count, count2, k;
    char str[1000000], inverte[1000000], vazia[1000000];
    scanf("%d", &a);
    for (k = 0; k < a; k++)
    {
        i = 0;
        j = 0;
        tamanho = 0;
        strcpy(inverte, vazia);
        count = 0;
        count2 = 0;

        scanf("%d", &b);
        scanf("%d", &c);

        for (i = b; i <= c; i++)
        {
            imprime = b + count;
            printf("%d", imprime);
            sprintf(str, "%d", imprime);
            strcat(inverte, str);
            count++;
        }
        
        tamanho = strlen(inverte);
        tamanho--;

        for (j = tamanho; j >= 0; j--)
        {
            printf("%c", inverte[j]);
        }

        printf("\n");
    }
    return 0;
}