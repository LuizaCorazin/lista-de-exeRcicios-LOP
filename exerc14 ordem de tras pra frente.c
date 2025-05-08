#include <stdio.h>

int main() {
    int numeros[5];  
    int i;

    printf("Digite 5 numeros inteiros:\n");

    for (i = 0; i < 5; i++) { //para repetir o pedido 5 vezes
        scanf("%d", &numeros[i]);  
    }

    
    printf("Números na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {   //repetir os numeros em ordem inversa
        printf("%d ", numeros[i]);  
    }

    printf("\n"); 
    return 0;
}

