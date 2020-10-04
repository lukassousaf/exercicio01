#include <stdio.h>

char fake_strcat(char *str1, char *str2)
{
    int i, j;
    for (i = 0; str1[i] != '\0'; ++i)
        ;
    for (j = 0; str2[j] != '\0'; ++j, ++i)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
}

int main()
{
    char str[80];
    strcpy(str, "As ");
    fake_strcat(str, "strings ");
    fake_strcat(str, "foram ");
    fake_strcat(str, "concatenadas.");
    puts(str);
    return 0;
}
