#include <stdio.h>

int main() {
    int codigo, quantidade;
    float total = 0.0;

    printf("===== PEDIDO LANCHONETE ==========\n");
    printf("Tabela de preços:\n");
    printf("=================================\n");
    printf("Especificação   Código  Preço\n");
    printf("Cachorro Quente 100     R$ 1,20\n");
    printf("Bauru Simples   101     R$ 1,30\n");
    printf("Bauru com Ovo   102     R$ 1,50\n");
    printf("Hambúrguer      103     R$ 1,20\n");
    printf("Cheeseburger    104     R$ 1,30\n");
    printf("Refrigerante    105     R$ 1,00\n");

    while (1) {
        printf("Entre com o código do pedido (0 para encerrar): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break;
        }

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        switch (codigo) {
            case 100:
                total += quantidade * 1.20;
                printf("Item: Cachorro Quente, Quantidade: %d, Valor: R$ %.2f\n", quantidade, quantidade * 1.20);
                break;
            case 101:
                total += quantidade * 1.30;
                printf("Item: Bauru Simples, Quantidade: %d, Valor: R$ %.2f\n", quantidade, quantidade * 1.30);
                break;
            case 102:
                total += quantidade * 1.50;
                printf("Item: Bauru com Ovo, Quantidade: %d, Valor: R$ %.2f\n", quantidade, quantidade * 1.50);
                break;
            case 103:
                total += quantidade * 1.20;
                printf("Item: Hambúrguer, Quantidade: %d, Valor: R$ %.2f\n", quantidade, quantidade * 1.20);
                break;
            case 104:
                total += quantidade * 1.30;
                printf("Item: Cheeseburger, Quantidade: %d, Valor: R$ %.2f\n", quantidade, quantidade * 1.30);
                break;
            case 105:
                total += quantidade * 1.00;
                printf("Item: Refrigerante, Quantidade: %d, Valor: R$ %.2f\n", quantidade, quantidade * 1.00);
                break;
            default:
                printf("Código inválido!\n");
        }
    }

    printf("=================================\n");
    printf("VALOR TOTAL: R$ %.2f\n", total);

    return 0;
}
