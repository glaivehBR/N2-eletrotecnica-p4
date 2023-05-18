#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    // Lendo os elementos da matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimindo todos os elementos, exceto a diagonal principal
    printf("Elementos da matriz (exceto diagonal principal):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
