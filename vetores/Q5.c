#include <stdio.h>

int main() {
    int vetor[8];
    int num, i, posicao = -1;

    // Preenchendo o vetor com valores fornecidos pelo usuário
    printf("Digite 8 números inteiros:\n");
    for (i = 0; i < 8; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Solicitando um número do teclado
    printf("Digite um número: ");
    scanf("%d", &num);

    // Pesquisando se o número existe no vetor
    for (i = 0; i < 8; i++) {
        if (vetor[i] == num) {
            posicao = i;
            break;
        }
    }

    // Exibindo o resultado da pesquisa
    if (posicao != -1) {
        printf("O número %d está na posição %d do vetor.\n", num, posicao);
    } else {
        printf("O número %d não existe no vetor.\n", num);
    }

    return 0;
}
