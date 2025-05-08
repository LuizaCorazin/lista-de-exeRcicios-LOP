#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    
};

int main () {
   
   struct Pessoa pessoa1 = {"livia", 12}; //struct Pessoa é o tipo de dado (como se fosse um novo tipo, igual int ou float) e pessoa1 a variavel
   
   printf("\nnome;%s\n", pessoa1.nome);
   printf("idade:%d\n", pessoa1.idade);
  
   
   
   struct Pessoa pessoa2 = {"julia", 25}; //repetido a quantidade de vezes que eu quero que apareça um produto mudando o 1 2 ou 3
   
    printf("\nnome;%s\n", pessoa2.nome);
    printf("idade:%d\n", pessoa2.idade);
   
    if (pessoa1.idade > pessoa2.idade) {                    //coloquei if else para clocar duas vezes ou seja, se pessoa1 for maior que pessoa2 entao if se pessoa2 for maior que pessoa1 entao else if
        printf("O mais velho é: %d\n", pessoa1.idade);
        
    } else if (pessoa2.idade > pessoa1.idade) {
        
        printf("O mais velho é quem tem: %d\n", pessoa2.idade);
    } else {
        
        printf("Os dois números são iguais.\n");
    }
    
    
   return 0;
}