#include <stdio.h>

int main(void) {
    int opcao;
    printf("1 - Inserir novo cliente.\n");
    printf("2 - Consultar cliente por CPF.\n");
    printf("3 - Consultar cliente por nome.\n");
    printf("4 - Remover cliente da base de clientes.\n");
    printf("Qualquer outra tecla para sair do sistema.\n");

    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Vamos inserir um novo cliente?\nDigite o nome:\nDigite seu CPF:\n");
            break;
        case 2:
            printf("Vamos consultar um cliente?\nDigite seu CPF:\n");
            break;
        case 3:
            printf("Vamos consultar um cliente?\nDigite seu Nome:\n");
            break;
        case 4:
            printf("Vamos remover um cliente?\nDigite seu CPF:\n");
            break;
        default:
            printf("Vamos sair do sistema?\n");
            break;
    }

    return 0;
}
