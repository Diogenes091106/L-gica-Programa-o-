#include <stdio.h>

int main() {
    float valorCompra, valorPrestacao;
    int quantidadePrestacoes;

    // Entrada de dados
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);
    printf("Digite a quantidade de prestacoes (de 1 a 5): ");
    scanf("%d", &quantidadePrestacoes);

    // C�lculo do valor de cada presta��o
    valorPrestacao = valorCompra / quantidadePrestacoes;

    // Sa�da dos resultados
    printf("\n===== LOJA PORTAL ORG�NICO =========\n");
    printf("Valor da Compra: R$ %.2f\n", valorCompra);
    printf("Quantidade de prestacoes: %d\n", quantidadePrestacoes);
    printf("======== Prestacoes ================\n");
    printf("Valor de cada Prestacao: R$ %.2f\n", valorPrestacao);

    return 0;
}
