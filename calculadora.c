#include <stdio.h>
int main(void) {

    float a, b;
    int op;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("\nEscolha uma operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    scanf("%d", &op);

    switch(op){

        case 1:
            printf("Resultado: %.2f\n", a + b);
            break;

        case 2:
            printf("Resultado: %.2f\n", a - b);
            break;

        case 3:
            printf("Resultado: %.2f\n", a * b);
            break;

        case 4:
            printf("Resultado: %.2f\n", a / b);
            break;

        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
