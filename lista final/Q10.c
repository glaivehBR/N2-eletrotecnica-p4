#include <stdio.h>

int main() {
    int numeroDecimal;

    
    printf("Digite um número decimal: ");
    scanf("%d", &numeroDecimal);

    
    printf("Número em hexadecimal (hexa): %X\n", numeroDecimal);
    printf("Número em octal: %o\n", numeroDecimal);

    return 0;
}
