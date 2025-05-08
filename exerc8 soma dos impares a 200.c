#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 200; i++) { //para identificar de onde a onde 
        if (i % 2 == 0) {  //para identicar os numeros pares
            soma += i; // dar a conta que o computador tem que executar
        }
    }

    printf("A soma dos números pares de 1 a 200 é: %d\n", soma);

    return 0;
}

