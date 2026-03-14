#include <stdio.h>

int main(void) {
    int n, i, cont = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    // Verifica se o número é menor ou igual a 1
    if(n <= 1){
        printf("O numero %d não é primo\n", n);
        return 0;
    }
    
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    
    if(cont == 2){
        printf("O numero %d é primo\n", n);
    }else{
        printf("O numero %d nao é primo\n", n);
    }

    return 0;
}
