#include <stdio.h>

int main() {
    float metros, decimetros, centimetros, milimetros;

    
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    
    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    
    printf("Valor em decímetros: %.2f\n", decimetros);
    printf("Valor em centímetros: %.2f\n", centimetros);
    printf("Valor em milímetros: %.2f\n", milimetros);

    return 0;
}
