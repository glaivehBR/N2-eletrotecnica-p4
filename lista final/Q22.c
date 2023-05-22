#include <stdio.h>

int main() {
    int dia, mes, ano;
    
    
    printf("Digite o dia de aniversário: ");
    scanf("%d", &dia);
    printf("Digite o mês de aniversário: ");
    scanf("%d", &mes);
    printf("Digite o ano de aniversário: ");
    scanf("%d", &ano);

    
    if (ano >= 0 && mes >= 1 && mes <= 12 && dia >= 1 && dia <= 31) {
        printf("Data de aniversário válida.\n");
    } else {
        printf("Data de aniversário inválida.\n");
        if (ano < 0) {
            printf("Ano inválido.\n");
        }
        if (mes < 1 || mes > 12) {
            printf("Mês inválido.\n");
        }
        if (dia < 1 || dia > 31) {
            printf("Dia inválido.\n");
        }
    }

    return 0;
}