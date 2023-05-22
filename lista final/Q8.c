#include <stdio.h>

int main() {
    float precoProduto, desconto, novoPreco;

    
    printf("Digite o preço do produto: ");
    scanf("%f", &precoProduto);

    
    desconto = precoProduto * 0.09;
    novoPreco = precoProduto - desconto;
    
    
    printf("Novo preço com desconto: %.2f\n", novoPreco);

    return 0;
}
