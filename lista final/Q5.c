#include <stdio.h>

int main() {
    int numero = 2;

    printf("Números pares de 1 a 100:\n");

    while (numero <= 100) {
        printf("%d\n", numero);
        numero += 2;
    }

    return 0;
}
