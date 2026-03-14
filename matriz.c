#include <stdio.h>

int main() {

    int matriz[10][10];
    int linhas, colunas;
    int i, j;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
