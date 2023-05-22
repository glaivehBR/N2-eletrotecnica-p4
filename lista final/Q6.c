#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2;
    float soma, produto, quadrado1, raizQuadrada, seno;

    
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    
    soma = numero1 + numero2;
    produto = numero1 * pow(numero2, 2);
    quadrado1 = pow(numero1, 2);
    raizQuadrada = sqrt(pow(numero1, 2) + pow(numero2, 2));
    seno = sin(numero1 - numero2);

    
    printf("a. Soma dos números: %.2f\n", soma);
    printf("b. Produto do primeiro número pelo quadrado do segundo: %.2f\n", produto);
    printf("c. Quadrado do primeiro número: %.2f\n", quadrado1);
    printf("d. Raiz quadrada da soma dos quadrados: %.2f\n", raizQuadrada);
    printf("e. Seno da diferença do primeiro número pelo segundo: %.2f\n", seno);

    return 0;
}