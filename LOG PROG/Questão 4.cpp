#include <stdio.h>

int main() {
    float temperaturaF, temperaturaC;

    // Entrada de dados
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaF);

    // Convers�o de Fahrenheit para Celsius
    temperaturaC = (temperaturaF - 32) * 5 / 9;

    // Sa�da dos resultados
    printf("\n===== CONVERSOR DE TEMPERATURA =========\n");
    printf("Temperatura em F: %.2f\n", temperaturaF);
    printf("\n======== Resultado ==========\n");
    printf("%.2f�F � o igual a %.2f�C\n", temperaturaF, temperaturaC);

    return 0;
}
