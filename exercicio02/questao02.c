#include <stdio.h>

int fake_strcmp(char *str1, char *str2)
{
    int i = 0;
    while (str2[i] == str1[i])
    {
        if (str2[i] == '\0')
        {
            return 0;
        }
        i++;
    }
    return -1;
}

// UTILIZAÇÃO DA FUNÇÃO fake_strcmp
int main()
{
    char resposta[100] = "apple";
    char palpite[80];
    do
    {
        printf("Qual sua fruta favorita? ");
        fflush(stdout);
        scanf("%s", palpite);
    } while (fake_strcmp(resposta, palpite) != 0);
    puts("Resposta Correta!");
    return 0;
}
