#include <stdio.h>

int main() {
    int num, maior, menor, count = 0;
    float soma = 0;

    printf("======== MEDIA MAIOR E MENOR ==========\n");

    while (1) {
        printf("Entre com um número (0 para encerrar): ");
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
        printf("Média = %.2f\n", soma / count);
    } else {
        printf("Nenhum número foi inserido.\n");
    }

    return 0;
}
