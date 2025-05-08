#include <stdio.h>

int main() {
    int n1, n2;
    
    printf ("digite um numero\n");
    scanf("%d", &n1);
    
    printf ("digite mais um numero\n");
    scanf("%d", &n2);
    
    if (n1 > n2) { //coloquei if else para clocar duas vezes ou seja, se n1 for maior que n2 entao if se n2 for maior que n1 entao else if
        printf("O maior número é: %d\n", n1);
        
    } else if (n2 > n1) {
        
        printf("O maior número é: %d\n", n2);
    } else {
        
        printf("Os dois números são iguais.\n");
    }
  
    return 0;
}