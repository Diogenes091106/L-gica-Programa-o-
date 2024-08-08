#include <stdio.h>

int main() {
    int idade, totalMenores21 = 0, totalMaiores50 = 0;
    
    printf("============= IDADES =============\n");
    
    while (1) {
        printf("Entre com a idade (número negativo ou zero para sair): ");
        scanf("%d", &idade);
        
        if (idade <= 0) {
            break;
        }
        
        if (idade < 21) {
            totalMenores21++;
        }
        
        if (idade > 50) {
            totalMaiores50++;
        }
    }
    
    printf("========== Resultado =============\n");
    printf("Total de pessoas menores de 21: %d\n", totalMenores21);
    printf("Total de pessoas maiores de 50: %d\n", totalMaiores50);

    return 0;
}
