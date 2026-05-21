/*Faça um programa em C que peça ao usuário o valor de uma prestação,
a taxa de juros (em %) e o tempo de atraso (em períodos). Em seguida, 
calcule e mostre o valor da prestação com juros de atraso*/

#include <stdio.h>

int main() {
    float valor, taxa, tempo, prestacao;

    printf("Digite o valor da prestação: ");
    scanf("%f", &valor);

    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);

    printf("Digite o tempo de atraso (em períodos): ");
    scanf("%f", &tempo);

    prestacao = valor + (valor * (taxa / 100) * tempo);

    printf("O valor da prestação em atraso é: %.2f\n", prestacao);

    return 0;
}
