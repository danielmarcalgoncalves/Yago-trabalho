#include "leitor.c"

int main() {
    printf("Digite um mes em numero para ver a estacao >> ");
    int mes = ler_int();

    switch(mes) {
    case 6:
    case 7:
    case 8:
        printf("Inverno \n");
        break;
    case 9:
    case 10:
    case 11:
        printf("Primavera \n");
        break;
    case 12:
    case 1:
    case 2:
        printf("Verao \n");
        break;
    case 3:
    case 4:
    case 5:
        printf("Outono \n");
        break;
    default:
        printf("Mes invalido \n");
    }

}