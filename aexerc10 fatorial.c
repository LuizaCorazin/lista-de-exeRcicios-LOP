#include<stdio.h>

int fat, n;
int main()
{
    printf("escolha um numero para fatoriar");
  scanf("%d", &n) ;
  for(fat = 1; n > 1; n = n - 1)//para colocar as informações para comecar a fatoração, como sempre inicia no 1
  {//para o loop continua até o numero ser maior que 1 e toda vez que fizer uma conta o numero é adicionada 1
      fat = fat * n;//para ocorrer a fatoração, onde o numero vai sendo muiltiplicado pelo numeros positivos e menores que ele até ser igualado
  }

  printf("\nO fatorial é %d", fat);
  return 0;
}
