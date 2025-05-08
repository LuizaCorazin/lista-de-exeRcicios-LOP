#include <stdio.h>
#include <locale.h>
int main() {
    setlocale (LC_ALL,"");
    int idade; //declarar as variaveis
    
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    
    if(idade<16) //if else para declarar as condições, se for menor que 16 nao pode votar...
    {
        printf("voce nao pode votar.");
    }
    else if((idade>=16 && idade<18) || idade>=70)
    {
        printf("voce pode escolher se quer votar/facultativo.");
    }
    else
    {
        printf("voce pode votar");
    }
    return 0;
}