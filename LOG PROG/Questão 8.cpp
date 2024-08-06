#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("====== CALCULO DE IMC ==========\n");
    printf("Peso (Kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("========== Resultado ===========\n");
    printf("IMC = %.2f\n", imc);

    if (imc < 20) {
        printf("Situação = Abaixo do Peso\n");
    } else if (imc < 25) {
        printf("Situação = Peso Normal\n");
    } else if (imc < 30) {
        printf("Situação = Sobre Peso\n");
    } else if (imc < 40) {
        printf("Situação = Obeso\n");
    } else {
        printf("Situação = Obeso Mórbido\n");
    }

    return 0;
}
