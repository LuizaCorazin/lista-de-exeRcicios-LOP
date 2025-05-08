#include <stdio.h>

struct Produto {
    char nome[50];
    int preço;
    float quantidade;
};

int main () {
    
   
   struct Produto produto1 = {"lacinho de cabelo", 12.00, 2}; //struct Pessoa é o tipo de dado (como se fosse um novo tipo, igual int ou float) e pessoa1 a variavel
   
   printf("nome;%s\n", produto1.nome);
   printf("idade:%d\n", produto1.preço);
   printf("altura; %.2f\n", produto1.quantidade);
   
   
   struct Produto produto2 = {"escova de cabelo", 25.00, 1}; //repetido a quantidade de vezes que eu quero que apareça um produto mudando o 1 2 ou 3
   
    printf("\nnome;%s\n", produto2.nome);
    printf("idade:%d\n", produto2.preço);
    printf("altura; %.2f\n", produto2.quantidade);
    
    
    
    struct Produto produto3 = {"oleo de cabelo", 52.00, 1};
    
    printf("\nnome;%s\n", produto3.nome);
    printf("idade:%d\n", produto3.preço);
    printf("altura; %.2f\n", produto3.quantidade);
    
    
    
    struct Produto produto4 = {"oleo de cabelo", 52.00, 1};
    printf("\nnome;%s\n", produto4.nome);
    printf("idade:%d\n", produto4.preço);
    printf("altura; %.2f\n", produto4.quantidade);
    
   
    struct Produto produto5 = {"secador", 574.99, 1};
    
    printf("\nnome;%s\n", produto5.nome);
    printf("idade:%d\n", produto5.preço);
    printf("altura; %.2f\n", produto5.quantidade);

    
    
    
    
   
   return 0;
}
