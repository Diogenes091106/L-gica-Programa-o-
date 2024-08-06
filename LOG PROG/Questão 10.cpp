#include <stdio.h>

int main() {
    int num1, num2, opcao, resultado;

    printf("========== OPERA��ES MATEM�TICAS ==========\n");
    printf("Entre com o Primeiro N�mero: ");
    scanf("%d", &num1);
    printf("Entre com o Segundo N�mero: ");
    scanf("%d", &num2);

    printf("Escolha a opera��o:\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRA��O\n");
    printf("3 - SAIR\n");
    printf("Op��o: ");
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
            printf("Op��o inv�lida.\n");
            return 1;
    }

    if (resultado > 0) {
        printf("%d � um n�mero positivo.\n", resultado);
    } else if (resultado < 0) {
        printf("%d � um n�mero negativo.\n", resultado);
    } else {
        printf("O resultado � zero.\n");
    }

    return 0;
}
