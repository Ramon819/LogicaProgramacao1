/*Crie um programa em C que peça ao usuário o raio de um círculo. 
Em seguida, calcule e mostre na tela o perímetro (circunferência)
e a área do círculo.*/

#include <stdio.h>
#include<math.h>

#define PI 3.14  

int main() {
    float raio, perimetro, area;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;
    area = PI * raio * raio;

    printf("Perímetro do círculo: %.2f\n", perimetro);
    printf("Área do círculo: %.2f\n", area);

    return 0;
}
