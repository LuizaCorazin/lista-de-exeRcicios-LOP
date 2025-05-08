#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0;

    for (int i = 0; i < 10; i++) { //o for é usado como laço para repetir os printf com 10 numeros
        printf("digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    if (numeros [i] % 2 == 0) { //condição para identificar os pares
            pares++;
        }
    }

    printf("\ntotal de numeros pares: %d\n", pares);

    return 0;
}

