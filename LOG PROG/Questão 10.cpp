#include <stdio.h>

int main() {
    int num1, num2, opcao, resultado;

    printf("========== OPERAÇÕES MATEMÁTICAS ==========\n");
    printf("Entre com o Primeiro Número: ");
    scanf("%d", &num1);
    printf("Entre com o Segundo Número: ");
    scanf("%d", &num2);

    printf("Escolha a operação:\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRAÇÃO\n");
    printf("3 - SAIR\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("========== Resultado ==========\n");

    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("O resultado de %d + %d = %d.\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("O resultado de %d - %d = %d.\n", num1, num2, resultado);
            break;
        case 3:
            printf("Saindo do programa.\n");
            return 0;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    if (resultado > 0) {
        printf("%d é um número positivo.\n", resultado);
    } else if (resultado < 0) {
        printf("%d é um número negativo.\n", resultado);
    } else {
        printf("O resultado é zero.\n");
    }

    return 0;
}
