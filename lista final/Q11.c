#include <stdio.h>

int main() {
    float valorHoraAula, numeroAulas, percentualINSS, salarioBruto, salarioLiquido;

    
    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valorHoraAula);

    printf("Digite o número de aulas dadas: ");
    scanf("%f", &numeroAulas);

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &percentualINSS);

    
    salarioBruto = valorHoraAula * numeroAulas;
    salarioLiquido = salarioBruto - (salarioBruto * percentualINSS / 100);

    
    
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}