/* Crie um programa em C que peça ao usuário um número inteiro.
Em seguida, mostre na tela qual é o número antecessor e o sucessor desse valor.*/

#include <stdio.h>

int main() {
    int N;

    printf("Digite um número: ");
    scanf("%d", &N);

    printf("O antecessor de %d é %d\n", N, N - 1);
    printf("O sucessor de %d é %d\n", N, N + 1);

    return 0;
}
