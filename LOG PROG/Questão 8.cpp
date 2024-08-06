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
        printf("Situa��o = Abaixo do Peso\n");
    } else if (imc < 25) {
        printf("Situa��o = Peso Normal\n");
    } else if (imc < 30) {
        printf("Situa��o = Sobre Peso\n");
    } else if (imc < 40) {
        printf("Situa��o = Obeso\n");
    } else {
        printf("Situa��o = Obeso M�rbido\n");
    }

    return 0;
}
