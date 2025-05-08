#include <stdio.h>

typedef struct {
    char nome[50];
    float nota1, nota2, nota3;
} Media;

int main() {
    Media turma[3];


    Media media1 = {"Livia", 7, 9, 8}; // Declarando e inicializando as structs
    Media media2 = {"Julia", 7, 5, 2};
    Media media3 = {"Beatriz", 9, 9, 5};

    
    float mediaFinal; // Variável para calcular a média e as medias a seguir

    
    printf("\nNome: %s\n", media1.nome); 
    printf("Nota 1: %.2f\n", media1.nota1);
    printf("Nota 2: %.2f\n", media1.nota2);
    printf("Nota 3: %.2f\n", media1.nota3);
    mediaFinal = (media1.nota1 + media1.nota2 + media1.nota3) / 3;
    printf("Média final: %.2f\n", mediaFinal);
    if (mediaFinal >= 7.0)
        printf("Situação: Aprovado\n");
    else
        printf("Situação: Reprovado\n");

    
    printf("\nNome: %s\n", media2.nome);
    printf("Nota 1: %.2f\n", media2.nota1);
    printf("Nota 2: %.2f\n", media2.nota2);
    printf("Nota 3: %.2f\n", media2.nota3);
    mediaFinal = (media2.nota1 + media2.nota2 + media2.nota3) / 3;
    printf("Média final: %.2f\n", mediaFinal);
    if (mediaFinal >= 7.0)
        printf("Situação: Aprovado\n");
    else
        printf("Situação: Reprovado\n");

    
    printf("\nNome: %s\n", media3.nome);
    printf("Nota 1: %.2f\n", media3.nota1);
    printf("Nota 2: %.2f\n", media3.nota2);
    printf("Nota 3: %.2f\n", media3.nota3);
    mediaFinal = (media3.nota1 + media3.nota2 + media3.nota3) / 3;
    printf("Média final: %.2f\n", mediaFinal);
    if (mediaFinal >= 7.0)
        printf("Situação: Aprovado\n");
    else
        printf("Situação: Reprovado\n");

    return 0;
}