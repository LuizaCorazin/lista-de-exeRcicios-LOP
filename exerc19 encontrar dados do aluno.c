#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[3];
    char busca[50];
    int i, encontrado = 0;

    // Cadastro dos alunos
    for (i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        printf("\n");
    }

    // Buscar pelo nome
    printf("Digite o nome do aluno pra buscar: ");
    scanf(" %[^\n]", busca);

    // Procurar e mostrar
    for (i = 0; i < 3; i++) {
        int j = 0;
        while (alunos[i].nome[j] == busca[j] && alunos[i].nome[j] != '\0' && busca[j] != '\0') {
            j++;
        }

        if (alunos[i].nome[j] == '\0' && busca[j] == '\0') {
            printf("\nAchamos o aluno!\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\n Aluno não encontrado!\n");
    }

    return 0;
}



