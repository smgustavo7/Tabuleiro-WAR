#include <stdio.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    struct Territorio territorios[5];
    int i;

    printf("=== Cadastro de Territorios ===\n");

    for(i = 0; i < 5; i++) {

        printf("\nTerritorio %d\n", i + 1);

        printf("Nome: ");
        scanf("%s", territorios[i].nome);

        printf("Cor: ");
        scanf("%s", territorios[i].cor);

        printf("Tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    printf("\n=== Dados Cadastrados ===\n");

    for(i = 0; i < 5; i++) {
        printf("\n%s | %s | %d tropas\n",
               territorios[i].nome,
               territorios[i].cor,
               territorios[i].tropas);
    }

    return 0;
}
