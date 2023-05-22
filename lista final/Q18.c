#include <stdio.h>

int main() {
    float valorCompra, valorVenda;
    float lucro;

    
    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    
    if (valorCompra < 20.00) {
        lucro = 0.45; 
        
        lucro = 0.30; 
    }

    
    valorVenda = valorCompra + (valorCompra * lucro);

    
    printf("O valor da venda é: %.2f\n", valorVenda);

    return 0;
}