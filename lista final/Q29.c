#include <stdio.h>

int main() {
    float notas[5][4];
    float mediaAluno[5];
    float mediaTurma = 0;

    // Lendo as notas de cada aluno
    for (int i = 0; i < 5; i++) {
        printf("Digite as 4 notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    
    for (int i = 0; i < 5; i++) {
        mediaAluno[i] = (notas[i][0] * 3 + notas[i][1] * 2 + notas[i][2] + notas[i][3]) / 7;
        mediaTurma += mediaAluno[i];
    }
    mediaTurma /= 5;

    
    for (int i = 0; i < 5; i++) {
        float media = mediaAluno[i];
        float mediaMinima = 7;
        float pontosRecuperacao = mediaMinima - media;

        if (media >= 7) {
            printf("Aluno %d: Passou\n", i + 1);
        } else if (media >= 4) {
            printf("Aluno %d: Vai para recuperação - precisa de %.2f pontos\n", i + 1, pontosRecuperacao);
        } else {
            printf("Aluno %d: Não passou\n", i + 1);
        }
    }

    
    printf("Média da turma: %.2f\n", mediaTurma);

    return 0;
}