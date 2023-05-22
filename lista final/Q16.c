#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    
    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        
        float raizQuadrada = sqrt(numero);
        printf("A raiz quadrada é: %.2f\n", raizQuadrada);
    } else {
        
        float quadrado = numero * numero;
        printf("O número elevado ao quadrado é: %.2f\n", quadrado);
    }

    return 0;
}
