#include <stdio.h>

int main() {
    int escolha;
    float total = 0;
    
    do {
        printf("\nEscolha a fruta pelo numero:\n");
        printf("1 - Abacaxi (5 reais)\n");
        printf("2 - Maca (1 real)\n");
        printf("3 - Pera (4 reais)\n");
        printf("0 - Encerrar compra\n");
        
        scanf("%d", &escolha);
        
        switch (escolha) {
            case 1:
                total += 5;
                printf("Voce escolheu Abacaxi. Preço atual: %.2f reais\n", total);
                break;
            case 2:
                total += 1;
                printf("Voce escolheu Maca. Preço atual: %.2f reais\n", total);
                break;
            case 3:
                total += 4;
                printf("Voce escolheu Pera. Preço atual: %.2f reais\n", total);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (escolha != 0);
    
    printf("Valor total da compra: %.2f reais\n", total);
}