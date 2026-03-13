# Algoritmos em C

Este repositório contém exercícios de programação desenvolvidos durante o curso de Sistemas de Informação.

Conteúdos:
- lógica de programação
- estruturas condicionais
- estruturas de repetição
Autor: Emerson de Oliveira Silva

#Programa em C – Verificar Número Primo
Este programa em C verifica se um número digitado pelo usuário é primo.
Um número primo é aquele que possui apenas dois divisores: 1 e ele mesmo.
O programa funciona da seguinte forma:
O usuário digita um número.
O algoritmo verifica quantos divisores esse número possui usando o operador % (módulo).
Se o número tiver exatamente 2 divisores, ele é considerado primo.
Caso contrário, não é primo.
* Esse exemplo foi desenvolvido para praticar estruturas de repetição (for) e condicionais (if) na linguagem C.

#include <stdio.h>
int main(void) {
    int n, i, cont = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    if(cont == 2){
        printf("O numero %d eh primo\n", n);
    }else{
        printf("O numero %d nao eh primo\n", n);
    }

    return 0;
}
