/*Faça um programa em C que peça ao usuário o numerador e o denominador de uma fração. 
Em seguida, calcule e mostre na tela o valor decimal da fração*/

#include <stdio.h>

int main() {
    float numerador, denominador, resultado;

    printf("Digite o numerador: ");
    scanf("%f", &numerador);

    printf("Digite o denominador: ");
    scanf("%f", &denominador);

        resultado = numerador / denominador;
        printf("O valor decimal da fração é: %.2f\n", resultado);

    return 0;
}
