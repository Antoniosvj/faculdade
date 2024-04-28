#include <stdio.h>

int main() {
    int cadastro = 0, ativo = 0, logado = 0;
    char opcao;

    printf("Deseja cadastrar sua conta? S/N\n");
    scanf(" %c", &opcao);

    if (opcao == 'S' || opcao == 's') {
        cadastro = 1;
        printf("\nConta cadastrada\n");
    }

    printf("Deseja ativar sua conta? S/N\n");
    scanf(" %c", &opcao);

    if (opcao == 'S' || opcao == 's') {
        ativo = 1;
        printf("\nConta ativada\n");
    }

    printf("Deseja fazer login na sua conta? S/N\n");
    scanf(" %c", &opcao);

    if (opcao == 'S' || opcao == 's') {
        logado = 1;
        printf("\nVocê está logado\n");
    }

    if (cadastro == 1 && ativo == 1 && logado == 1) {
        printf("Seja bem-vindo.\n");
    } else {
        printf("Algo deu errado.\n");
    }

    return 0;
}
