/*Faça um programa em C que peça ao usuário a base e a altura de um triângulo. 
Em seguida, calcule e mostre na tela a área do triângulo.*/

#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
