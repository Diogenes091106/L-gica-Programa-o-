#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Entrada de dados
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Cálculo do IMC
    imc = peso / (altura * altura);

    // Saída dos resultados
    printf("\n===== CALCULO DE IMC =========\n");
    printf("Peso (Kg): %.2f\n", peso);
    printf("Altura (m): %.2f\n", altura);
    printf("\n======== Resultado ==========\n");
    printf("IMC: %.2f\n", imc);

    return 0;
}
