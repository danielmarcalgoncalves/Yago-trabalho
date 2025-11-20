#include "leitor.c"

int main() {
    printf("  1 = Norte \n  2 = Nordeste \n  3 = Centro-Oeste \n  4 = Sudeste \n  5 = Sul \n ");
    printf("Selecione sua regiao >> ");
    int regiao = ler_int();

    switch(regiao) {
        case 1:
            printf("Regiao Norte: R$ 15,00 de frete \n");
            break;
        case 2:
            printf("Regiao Nordeste: R$ 12,50 de frete \n");
            break;
        case 3:
            printf("Regiao Centro-Oeste: R$ 7,50 de frete \n");
            break;
        case 4:
            printf("Regiao Sudeste R$5,00 de frete \n");
            break;
        case 5:
            printf("Regiao Sul R$5,00 de frete \n");
            break;
        default:
            printf("Numero ou regiao invalida\n");
    }

    return 0;
}