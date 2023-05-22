#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    int operacao;

    
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("Selecione a operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Digite o número da operação desejada: ");
    scanf("%d", &operacao);

    
    switch (operacao) {
        case 1:
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Erro: Operação inválida!\n");
            break;
    }

    return 0;
}