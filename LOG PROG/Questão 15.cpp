#include <stdio.h>

int main() {
    int senhaCadastrada, senhaDigitada;
    int tentativas = 0;

    printf("============= CADASTRO SISTEMA IFCE ===========\n");
    printf("Entre com a senha a cadastrar: ");
    scanf("%d", &senhaCadastrada);

    printf("\n============= ACESSO AO SISTEMA IFCE ==========\n");

    while (tentativas < 3) {
        printf("Entre com sua senha: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaCadastrada) {
            printf("ACESSO LIBERADO\n");
            return 0;
        } else {
            printf("SENHA INVÁLIDA!!!\n");
            tentativas++;
        }
    }

    printf("\nACESSO NÃO LIBERADO\n");

    return 0;
}
