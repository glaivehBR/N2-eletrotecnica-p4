#include <stdio.h>

int main() {
    char tipoCarro;
    float distanciaRodada, consumoEstimado;

    
    printf("Digite o tipo de carro (A, B ou C): ");
    scanf(" %c", &tipoCarro);
    printf("Digite a distância rodada em quilômetros: ");
    scanf("%f", &distanciaRodada);

    
    switch (tipoCarro) {
        case 'A':
        case 'a':
            consumoEstimado = distanciaRodada / 8.0;
            break;
        case 'B':
        case 'b':
            consumoEstimado = distanciaRodada / 9.0;
            break;
        case 'C':
        case 'c':
            consumoEstimado = distanciaRodada / 12.0;
            break;
        default:
            printf("Tipo de carro inválido.\n");
            return 0;
    }

    
    printf("O consumo estimado é de %.2f litros.\n", consumoEstimado);

    return 0;
}