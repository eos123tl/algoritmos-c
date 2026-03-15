# Algoritmos em C

Este repositório contém exercícios de programação desenvolvidos durante o curso de Sistemas de Informação UFMS.

Conteúdos:
- lógica de programação
- estruturas condicionais
- estruturas de repetição

Autor: Emerson de Oliveira Silva

## Programa em C – Verificar Número Primo

Este programa em C verifica se um número digitado pelo usuário é primo.

Um número primo é aquele que possui apenas dois divisores: 1 e ele mesmo.

### Como funciona:
- O usuário digita um número
- O algoritmo verifica quantos divisores esse número possui usando o operador % (módulo)
- Se o número tiver exatamente 2 divisores, ele é considerado primo
- Caso contrário, não é primo

**Nota**: Esse exemplo foi desenvolvido para praticar estruturas de repetição (for) e condicionais (if) na linguagem C.

### Código:

```c
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

## Programa em C – Ordenação Bubble Sort

Este programa em C ordena números utilizando o algoritmo **Bubble Sort**.

O Bubble Sort é um algoritmo simples de ordenação que compara elementos vizinhos de um vetor e troca suas posições quando estão fora de ordem.

### Como funciona:

* O usuário digita 5 números
* O algoritmo compara dois números vizinhos
* Se o primeiro for maior que o segundo, eles trocam de posição
* Esse processo se repete até que todos os números estejam ordenados

**Nota:** Esse exercício foi desenvolvido para praticar vetores e estruturas de repetição (`for`) na linguagem C.

### Código:

```c
#include <stdio.h>
int main(void) {
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

## Programa em C – Preenchimento de Matriz

Este programa em C permite que o usuário defina o tamanho de uma matriz e insira os valores de cada posição.

### Como funciona:

* O usuário informa a quantidade de linhas da matriz
* O usuário informa a quantidade de colunas
* O programa solicita os valores de cada posição da matriz
* Por fim, a matriz digitada é exibida na tela

**Nota:** Este exercício foi desenvolvido para praticar matrizes e estruturas de repetição aninhadas (`for`) na linguagem C.

### Código:

```c
#include <stdio.h>
int main(void) {

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
```

## Programa em C – Calculadora Simples

Este programa em C funciona como uma calculadora simples que realiza operações matemáticas básicas.

### Como funciona:

* O usuário digita dois números
* O usuário escolhe a operação desejada
* O programa realiza a operação e exibe o resultado

Operações disponíveis:

1 - Soma
2 - Subtração
3 - Multiplicação
4 - Divisão

**Nota:** Este exercício foi desenvolvido para praticar estruturas condicionais utilizando `switch`.

### Código:
#include <stdio.h>
int main() {

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
```
