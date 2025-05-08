
#include<locale.h>
#include <stdio.h>
int main() {
    setlocale(LC_ALL,"");
    int n1, n2, n3, media; //declarar variaveis
    printf("Digite o primeiro numero:\n"); //o que é escrito pelo computador ao usuario
    scanf("%d", &n1); //para saber em qual variavel será guardado
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &n3);
    media = (n1+n2+n3)/3; // soma da media 
    printf("a média é:%d \n", media); 
    if (media>=0 && media<=6.9) // declarando ate aonde vai a media
    {
        printf("sua média é nota muito baixa, reprovado!");
    }
    if (media>=7 && media<=10) // declarando ate aonde vai a media
    {
        printf("sua média é nota muito boa, aprovado!");
    }
    
    return 0;
}
