#include <stdio.h>

int main() {
    int numero;

    printf("Digite um n�mero entre 1 e 7: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Ter�a-feira\n");
            break;
        case 3:
            printf("Quarta-feira\n");
            break;
        case 4:
            printf("Quinta-feira\n");
            break;
        case 5:
            printf("Sexta-feira\n");
            break;
        case 6:
            printf("S�bado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("N�mero inv�lido! N�o existe dia da semana com esse n�mero.\n");
            break;
    }

    return 0;
}

