
#include <stdio.h>

char fake_strlen(char *str1)
{
    int c = 0;

    while (str1[c] != '\0')
    {
        c++;
    };
    return c;
}

int main()
{
    char szInput[256];
    printf("Digite uma palavra: ");
    gets(szInput);
    printf("A palavra possui %u caracteres.\n", (unsigned)fake_strlen(szInput));
    return 0;
}