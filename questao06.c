#include <stdio.h>

int main(){
    int primeiro = 1;
    int quantidade, razao;
    
    printf("Quantidade de elementos: ");
    scanf("%d", &quantidade);
    printf("Razão: ");
    scanf("%d", &razao);
    
    for (int i = 0; i < quantidade; i++){
        printf("%d\n", primeiro);
        primeiro *= razao;
    }
}