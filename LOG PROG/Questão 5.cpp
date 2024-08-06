#include <stdio.h>

int main() {
    int valorSaque;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    // Entrada de dados
    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valorSaque);

    notas100 = valorSaque / 100;
    valorSaque %= 100;
    notas50 = valorSaque / 50;
    valorSaque %= 50;
    notas20 = valorSaque / 20;
    valorSaque %= 20;
    notas10 = valorSaque / 10;
    valorSaque %= 10;
    notas5 = valorSaque / 5;
    valorSaque %= 5;
    notas2 = valorSaque / 2;
    valorSaque %= 2;
    notas1 = valorSaque;

    // resultados
    printf("\n===== SAQUE BANCARIO =========\n");
    printf("Saque de: R$ %d -->\n", valorSaque);
    printf("\n======== Resultado ==========\n");
    printf("%d notas de 100\n", notas100);
    printf("%d notas de 50\n", notas50);
    printf("%d notas de 20\n", notas20);
    printf("%d notas de 10\n", notas10);
    printf("%d notas de 5\n", notas5);
    printf("%d notas de 2\n", notas2);
    printf("%d notas de 1\n", notas1);

    return 0;
}
