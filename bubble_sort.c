#include <stdio.h>

int main() {

    int vet[5], i, j, temp;

    printf("Digite 5 numeros:\n");

    for(i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4 - i; j++){
            if(vet[j] > vet[j+1]){
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
    printf("Vetor ordenado:\n");

    for(i = 0; i < 5; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
