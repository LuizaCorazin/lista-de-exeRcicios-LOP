#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main () {
   struct Pessoa pessoa1 = {"ana", 25, 1.68};//struct Pessoa é o tipo de dado (como se fosse um novo tipo, igual int ou float) e pessoa1 a variavel
   
   printf("nome;%s\n", pessoa1.nome);
   printf("idade:%d\n", pessoa1.idade);
   printf("altura; %.2f\n", pessoa1.altura);
   
   return 0;
}