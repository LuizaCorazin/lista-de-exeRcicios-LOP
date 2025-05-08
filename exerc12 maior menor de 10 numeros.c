#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;

    
    for (int i = 0; i < 10; i++) { //o for para fazer o looping ate o escolhido - 10 -
    printf("Digite o número %d: ", i + 1);
    scanf("%d", &numeros[i]);

    if (i == 0) {
            
    maior = numeros[i];
    menor = numeros[i];
    } else {  //if else para dar opções em cada if colocar uma condição
    if (numeros[i] > maior) {
    maior = numeros[i];
     }
    if (numeros[i] < menor) {
    menor = numeros[i];
    }
    }
    }

    printf("\nMaior valor digitado: %d\n", maior);
    printf("Menor valor digitado: %d\n", menor);

    return 0;
}
