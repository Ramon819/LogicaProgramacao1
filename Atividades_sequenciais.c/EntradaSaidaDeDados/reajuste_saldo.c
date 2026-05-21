/*Crie um programa em C que peça ao usuário o saldo de uma aplicação e calcule o
novo saldo com um reajuste de 1%. Mostre o resultado com duas casas decimais.*/

#include <stdio.h>

int main() {
    float saldo, novoSaldo;

    printf("Digite o saldo da aplicação: ");
    scanf("%f", &saldo);

    novoSaldo = saldo * 1.01; 

    printf("O novo saldo, com reajuste de 1%%, é: %.2f\n", novoSaldo);

    return 0;
}
