#include <stdio.h>

int main() {
    int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0;
    float peso, pesoFaixa1 = 0, pesoFaixa2 = 0, pesoFaixa3 = 0, pesoFaixa4 = 0;

    for (int i = 0; i < 15; i++) {
        
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        printf("Digite o peso da pessoa %d: ", i + 1);
        scanf("%f", &peso);

        
        if (idade >= 1 && idade <= 10) {
            faixa1++;
            pesoFaixa1 += peso;
        } else if (idade >= 11 && idade <= 20) {
            faixa2++;
            pesoFaixa2 += peso;
        } else if (idade >= 21 && idade <= 30) {
            faixa3++;
            pesoFaixa3 += peso;
        } else {
            faixa4++;
            pesoFaixa4 += peso;
        }
    }

    
    float mediaFaixa1 = pesoFaixa1 / faixa1;
    float mediaFaixa2 = pesoFaixa2 / faixa2;
    float mediaFaixa3 = pesoFaixa3 / faixa3;
    float mediaFaixa4 = pesoFaixa4 / faixa4;

    
    printf("Quantidade de pessoas na faixa de 1 a 10 anos: %d\n", faixa1);
    printf("Média de peso das pessoas na faixa de 1 a 10 anos: %.2f\n", mediaFaixa1);

    printf("Quantidade de pessoas na faixa de 11 a 20 anos: %d\n", faixa2);
    printf("Média de peso das pessoas na faixa de 11 a 20 anos: %.2f\n", mediaFaixa2);

    printf("Quantidade de pessoas na faixa de 21 a 30 anos: %d\n", faixa3);
    printf("Média de peso das pessoas na faixa de 21 a 30 anos: %.2f\n", mediaFaixa3);

    printf("Quantidade de pessoas com mais de 30 anos: %d\n", faixa4);
    printf("Média de peso das pessoas com mais de 30 anos: %.2f\n", mediaFaixa4);

    return 0;
}