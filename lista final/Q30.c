#include <stdio.h>


void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void ordenarCrescente(int lista[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                trocar(&lista[j], &lista[j + 1]);
            }
        }
    }
}

// 
void ordenarDecrescente(int lista[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (lista[j] < lista[j + 1]) {
                trocar(&lista[j], &lista[j + 1]);
            }
        }
    }
}


void imprimirLista(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main() {
    int lista[10];

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &lista[i]);
    }

    int opcao;
    printf("Escolha uma opcao:\n");
    printf("1 - Listar em ordem crescente\n");
    printf("2 - Listar em ordem decrescente\n");
    printf("3 - Listar na ordem original\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            ordenarCrescente(lista, 10);
            printf("Valores em ordem crescente: ");
            imprimirLista(lista, 10);
            break;
        case 2:
            ordenarDecrescente(lista, 10);
            printf("Valores em ordem decrescente: ");
            imprimirLista(lista, 10);
            break;
        case 3:
            printf("Valores na ordem original: ");
            imprimirLista(lista, 10);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
