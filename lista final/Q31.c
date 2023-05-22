#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Tabuada de multiplicacao do numero %d:\n", numero);
    for (int i = 0; i <= 10; i++) {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}
