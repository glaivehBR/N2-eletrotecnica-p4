#include <stdio.h>

int main() {
    int idade;

    
    printf("Digite a idade: ");
    scanf("%d", &idade);

    
    if (idade >= 18 && idade <= 67) {
        printf("Você pode doar sangue!\n");
    } else {
        printf("Você não pode doar sangue.\n");
    }

    return 0;
}
