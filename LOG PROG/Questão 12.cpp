#include <stdio.h>

int main() {
    int conta;
    float saldo;
    int totalContas = 0, contasNegativas = 0;
    
    printf("============= CONTAS BANCÁRIAS =============\n");
    
    while (1) {
        printf("Entre com o número da conta (0 para sair): ");
        scanf("%d", &conta);
        
        if (conta <= 0) {
            break;
        }
        
        printf("Entre com o saldo da conta: ");
        scanf("%f", &saldo);
        
        printf("Conta: %d, Saldo: %.2f, %s\n", conta, saldo, saldo >= 0 ? "positivo" : "negativo");
        
        if (saldo < 0) {
            contasNegativas++;
        }
        
        totalContas++;
    }
    
    if (totalContas > 0) {
        float percentualNegativo = ((float)contasNegativas / totalContas) * 100;
        printf("TOTAL DE SALDO NEGATIVO = %.0f%%\n", percentualNegativo);
    }
    
    return 0;
}
