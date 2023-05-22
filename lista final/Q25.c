#include <stdio.h>

int main() {
    int quantidadeAlunos;
    float nota, somaNotas = 0;
    int contador = 0;
    
    
    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &quantidadeAlunos);

    
    while (contador < quantidadeAlunos) {
        printf("Digite a nota do aluno %d: ", contador + 1);
        scanf("%f", &nota);
        somaNotas += nota;
        contador++;
    }

    
    float media = somaNotas / quantidadeAlunos;

    
    printf("A média aritmética da turma é: %.2f\n", media);

    return 0;
}