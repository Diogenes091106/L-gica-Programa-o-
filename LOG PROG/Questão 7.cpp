#include <stdio.h>

int main() {
    int idade;
    float valor;

    printf("========== PLANOS DE SAÚDE ==========\n");
    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    printf("========== VALOR DO PLANO ===========\n");

    if (idade <= 10) {
        valor = 30.00;
    } else if (idade <= 29) {
        valor = 60.00;
    } else if (idade <= 45) {
        valor = 120.00;
    } else if (idade <= 59) {
        valor = 150.00;
    } else if (idade <= 65) {
        valor = 250.00;
    } else {
        valor = 400.00;
    }

    printf("VALOR PLANO = R$ %.2f\n", valor);

    return 0;
}
