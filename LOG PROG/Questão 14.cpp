#include <stdio.h>

int main() {
    int num, maior, menor, count = 0;
    float soma = 0;

    printf("======== MEDIA MAIOR E MENOR ==========\n");

    while (1) {
        printf("Entre com um n�mero (0 para encerrar): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (count == 0) {
            maior = menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }

        soma += num;
        count++;
    }

    if (count > 0) {
        printf("========== Resultado ==============\n");
        printf("Maior = %d\n", maior);
        printf("Menor = %d\n", menor);
        printf("M�dia = %.2f\n", soma / count);
    } else {
        printf("Nenhum n�mero foi inserido.\n");
    }

    return 0;
}
