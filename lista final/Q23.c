#include <stdio.h>

int main() {
    int mes;

    
    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    
    if (mes >= 1 && mes <= 12) {
        int dias;

        switch (mes) {
            case 2:
                dias = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dias = 30;
                break;
            default:
                dias = 31;
                break;
        }

        printf("O mês %d possui %d dias.\n", mes, dias);
    } else {
        printf("Número de mês inválido.\n");
    }

    return 0;
}
