#include <stdio.h>

int main() {
    int idade;

    printf("====== TORNEIO NATA��O MUNDIAL ==========\n");
    printf("Entre com a idade do Nadador: ");
    scanf("%d", &idade);

    printf("========== Resultado ===========\n");

    if (idade >= 5 && idade <= 8) {
        printf("O Nadador � da Categoria: Infantil A\n");
    } else if (idade <= 11) {
        printf("O Nadador � da Categoria: Infantil B\n");
    } else if (idade <= 14) {
        printf("O Nadador � da Categoria: Juvenil A\n");
    } else if (idade <= 18) {
        printf("O Nadador � da Categoria: Juvenil B\n");
    } else {
        printf("O Nadador � da Categoria: S�nior\n");
    }

    return 0;
}

