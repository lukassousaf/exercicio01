#include <stdio.h>

int main(){

    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        printf("Ano bissexto!\n");
    } 
    else if (ano % 400 == 0 || ano % 100 != 0)
    {
       printf("O ano não bissexto!\n");
    }
}