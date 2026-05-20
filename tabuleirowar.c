#include <stdio.h>

// Struct para armazenar os dados do território
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    struct Territorio territorios[5];
    int i;

    printf("=== Cadastro de Territorios ===\n");

    // Cadastro
    for(i = 0; i < 5; i++) {

        printf("\nTerritorio %d\n", i + 1);

        printf("Nome: ");
        scanf("%29s", territorios[i].nome);

        printf("Cor do exercito: ");
        scanf("%9s", territorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição
    printf("\n=== Territorios Cadastrados ===\n");

    for(i = 0; i < 5; i++) {

        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
