#include <stdio.h>   
#include <stdlib.h> 
#include <locale.h>  

int main() {
    setlocale(LC_ALL, "");  
    
    int n, i, tabuada, yo;

    do { //do while para ele faer uma ação e ter a opção de voltar
        printf("digite um numero para fazer a tabuad; \n");
        scanf("%d", &n);

        printf("\na tabuada do numero %d:\n", n);
        for (i = 0; i <= 10; i++) {
            tabuada = n * i;
            printf("%d x %d = %d\n", n, i, tabuada);
        }

        printf("\nDigite 1 para sair ou 2 para continuar: ");
        scanf("%d", &yo);

        if (yo == 2) {
            system("clear"); 
            
        }

    } while (yo == 2); // yo foi a variavel escolhida para guardar se a pessoa quer sair ou voltar de novo

    return 0;
}