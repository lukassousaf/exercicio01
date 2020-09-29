int main(){

    char menu[] = "Digite um número de 1 a 9, ou 0 para sair: ";
    int escolha = -1;
    while (escolha != 0){
        printf("\n%s", menu);
        scanf("%d", &escolha);
        switch (escolha) {
            case 0:
                printf("Você escolheu sair, até mais.\n");
                break;
            case 1:          
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                printf("\nVocê escolheu a opção %d!", escolha);
                break;
            default:
                printf("\nOpção inválida, tente novamente!");
                break;
        }
    }
    return 0;
}