#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct tipoDespesa {
    float receita;
    float despesa;
};

struct Projeto {
    float valor;
    struct tipoDespesa tipoDespesa;
};





int main() {
    struct Projeto projeto[10];

    for (size_t i = 0; i < 10; i++) {
        projeto[i].valor = 0;
        projeto[i].tipoDespesa.despesa = 0;
        projeto[i].tipoDespesa.receita = 0;
    }

    int opcao, count = 0; 

    while (true) {
        printf("Digite o número de 0 a 9 para cadastrar um projeto, ou -1 para encerrar: ");
        scanf("%d", &opcao);
        
        if (opcao == -1) {
            break;
        } else if (opcao <= -2 || opcao > 9) {
            printf("Opção Inválida!\n");
        } else {
            printf("Valor do projeto: ");
            scanf("%f", &projeto[opcao].valor);
            printf("Valor da RECEITA do projeto %d: ", opcao);
            scanf("%f", &projeto[opcao].tipoDespesa.receita);
            printf("Valor da DESPESA do projeto %d: ", opcao);
            scanf("%f", &projeto[opcao].tipoDespesa.despesa);
        }
    }
    printf("\nCUSTOS E SALDOS DOS PROJETOS\n");
    for (size_t i = 0; i < 10; i++) {
        printf("Projeto %d\n", i);
        printf("Valor do projeto = R$%0.2f\n", projeto[i].valor);
        printf("Saldo do projeto = R$%0.2f\n", projeto[i].tipoDespesa.receita - projeto[i].tipoDespesa.despesa);
        printf("\n");
    }
    return 0;
}