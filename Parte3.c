#include <stdio.h>
#include "leitor.c"

int main() {
    float total = 0;
    
    printf("CARDAPIO DE PRATOS:\n");
    printf("1 - Carne de soja - R$ 18,00\n");
    printf("2 - Peixe empanado - R$ 16,00\n");
    printf("3 - Carne de panela - R$ 17,50\n");
    printf("4 - Bisteca suina - R$ 15,00\n");
    printf("5 - File de frango - R$ 15,00\n");
    printf("Selecione o prato: ");
    int prato = ler_int();
    
    printf("CARDAPIO DE GUARNICOES:\n");
    printf("1 - Macarrao a bolonhesa - R$ 14,00\n");
    printf("2 - Macarrao alho e oleo - R$ 12,00\n");
    printf("3 - Arroz e fritas - R$ 11,00\n");
    printf("4 - Arroz e feijao - R$ 10,00\n");
    printf("Selecione a guarnicao: ");
    int guarnicao = ler_int();
    
    printf("CARDAPIO DE BEBIDAS:\n");
    printf("1 - Agua Mineral 350ml - R$ 1,50\n");
    printf("2 - Suco de Laranja 200ml - R$ 4,50\n");
    printf("3 - Coca-Cola 200 ml - R$ 2,50\n");
    printf("Selecione a bebida: ");
    int bebida = ler_int();
    
    switch(prato) {
        case 1:
            printf("Carne de soja - R$ 18,00\n");
            total += 18.00;
            break;
        case 2:
            printf("Peixe empanado - R$ 16,00\n");
            total += 16.00;
            break;
        case 3:
            printf("Carne de panela - R$ 17,50\n");
            total += 17.50;
            break;
        case 4:
            printf("Bisteca suina - R$ 15,00\n");
            total += 15.00;
            break;
        case 5:
            printf("File de frango - R$ 15,00\n");
            total += 15.00;
            break;
        default:
            printf("Opcao de prato incorreta!\n");
    }
    
    switch(guarnicao) {
        case 1:
            printf("Macarrao a bolonhesa - R$ 14,00\n");
            total += 14.00;
            break;
        case 2:
            printf("Macarrao alho e oleo - R$ 12,00\n");
            total += 12.00;
            break;
        case 3:
            printf("Arroz e fritas - R$ 11,00\n");
            total += 11.00;
            break;
        case 4:
            printf("Arroz e feijao - R$ 10,00\n");
            total += 10.00;
            break;
        default:
            printf("Opcao de guarnicao incorreta!\n");
    }
    
    switch(bebida) {
        case 1:
            printf("Agua Mineral 350ml - R$ 1,50\n");
            total += 1.50;
            break;
        case 2:
            printf("Suco de Laranja 200ml - R$ 4,50\n");
            total += 4.50;
            break;
        case 3:
            printf("Coca-Cola 200ml - R$ 2,50\n");
            total += 2.50;
            break;
        default:
            printf("Opcao de bebida incorreta!\n");
    }
    
    printf("TOTAL A PAGAR: R$ %.2f\n", total);
    
    return 0;
}