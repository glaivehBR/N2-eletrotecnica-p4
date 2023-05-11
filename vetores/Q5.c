#include <stdio.h>

int main() {
    int vetor[8];
    int num, i, posicao = -1;

    
    printf("Digite 8 números inteiros:\n");
    for (i = 0; i < 8; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("Digite um número: ");
    scanf("%d", &num);

    
    for (i = 0; i < 8; i++) {
        if (vetor[i] == num) {
            posicao = i;
            break;
        }
    }

    
    if (posicao != -1) {
        printf("O número %d está na posição %d do vetor.\n", num, posicao);
    } else {
        printf("O número %d não existe no vetor.\n", num);
    }

    return 0;
}
