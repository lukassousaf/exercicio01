#include <stdio.h>

void fake_strcpy(char *destino, char *origem)
{
    int i;
    for (i = 0; i <= strlen(destino); i++)
    {
        destino[i] = origem[i];
    }
}

int main(void)
{
    char str1[] = "Lukas";
    char str2[40];
    char str3[40];
    fake_strcpy(str2, str1);
    fake_strcpy(str3, "Copiado com sucesso!");
    printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
    return 0;
}