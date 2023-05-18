#include <stdio.h>

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int i, j;

    
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz2[i][j] = matriz1[i][j] * 2;
        }
    }

    
    printf("Matriz resultante (cada elemento multiplicado por 2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
