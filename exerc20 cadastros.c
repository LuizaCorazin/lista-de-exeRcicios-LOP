#include <stdio.h>

struct Aluno {
    char nome[50];
    float media;
};

int main() {
    struct Aluno alunos[5];
    float soma = 0.0;
    float mediaGeral;

    // Cadastro dos alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite a média final de %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].media);
        soma += alunos[i].media;
        printf("\n");
    }

    // Cálculo da média geral
    mediaGeral = soma / 5;

    // Exibição da média geral da turma
    printf("Média geral da turma: %.2f\n", mediaGeral);

    return 0;
}







