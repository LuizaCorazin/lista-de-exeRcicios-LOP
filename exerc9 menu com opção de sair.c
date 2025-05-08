#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Permite acentuação correta

    int menu, n1, n2;
    float res;

    do {
        // Mostra o menu de opções
        printf("\n MENU \n");
        printf("1 - somar\n");
        printf("2 - subtrair\n");
        printf("3 - sair\n");
        scanf("%d", &menu);

        switch (menu) { //switch para dar a opção de menu e cada case tem uma função
            case 1:
                
                printf("\nVocê escolheu somar\n");
                printf("digite o primeiro número: ");
                scanf("%d", &n1);
                printf("digite o segundo número: ");
                scanf("%d", &n2);
                res = n1 + n2;
                printf("resultado: %.2f\n", res);
                break;

            case 2:
               
                printf("\nVocê escolheu subtrair.\n");
                printf("Digite o primeiro número: ");
                scanf("%d", &n1);
                printf("Digite o segundo número: ");
                scanf("%d", &n2);
                res = n1 - n2;
                printf("Resultado: %.2f\n", res);
                break;

            case 3:
                
                printf("\nsaindo\n");
                break;

            default:
               
                printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (menu != 3); 

    return 0;
}
