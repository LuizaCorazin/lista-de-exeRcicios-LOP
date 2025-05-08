#include<locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL,"");
    int n;
    printf("Informe o numero:\n"); //printf para escrever para o usuario.
    scanf("%d", &n);//%d para saber aonde esta sendo colocado(variavel) e N é a variavel usada
      if (n % 2 == 0)// % calcula o resto da divisão do N
      {
           printf("Par!");
      }
      else
      {
      printf("Impar!");
      }
      return 0;
}