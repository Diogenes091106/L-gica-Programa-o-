#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número entre 1 e 7: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Terça-feira\n");
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
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Número inválido! Não existe dia da semana com esse número.\n");
            break;
    }

    return 0;
}

