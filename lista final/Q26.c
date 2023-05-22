#include <stdio.h>

int main() {
    int tamanho;


    printf("Digite o tamanho do lado do quadrado (entre 1 e 20): ");
    scanf("%d", &tamanho);

    
    if (tamanho >= 1 && tamanho <= 20) {
        
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                printf("* ");
            }
            printf("\n");
        }
    } else {
        printf("Tamanho do lado inválido.\n");
    }

    return 0;
}