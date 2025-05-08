#include<locale.h>
#include <stdio.h>
    int main() {
    int operador;
    float n1, n2, res;
    
    
     printf("escolha uma das opções\n");
     printf("\n 1 - soma\n");
     printf("\n 2 - sub\n");
     printf("\n 3 - div\n");
     printf("\n 4 - mult\n");
     scanf("%d", &operador);
     switch (operador) //usando switch para dar opção de menu ao usuario e de acordo com a escolha fazer as somas
     
     {
        case 1:
        
        printf("digite o primeiro numero\n");
        scanf("%f" ,&n1);
        printf("digite o segundo numero\n");
        scanf("%f" ,&n2);
        res = n1 + n2;
        printf("o resultado é %.2f\n", res);
        break;
        
        
        case 2:
        
        printf("digite o primeiro numero\n");
        scanf("%f" ,&n1);
        printf("digite o segundo numero\n");
        scanf("%f" ,&n2);
        res = n1 - n2;
        printf("o resultado é %.2f\n", res);
        break;
        
        
        case 3:
        
        printf("digite o primeiro numero\n");
        scanf("%f" ,&n1);
        printf("digite o segundo numero\n");
        scanf("%f" ,&n2);
        res = n1 / n2;
        printf("o resultado é %.2f\n", res);
        break;
        
        
        case 4:
        
        printf("digite o primeiro numero\n");
        scanf("%f" ,&n1);
        printf("digite o segundo numero\n");
        scanf("%f" ,&n2);
        res = n1 * n2;
        printf("o resultado é %.2f\n", res);
        break;
        
             default:
             printf("Opção Invalida");
        return 1;
         }
        
     return 0;
    } 