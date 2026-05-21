/* Crie um programa em C que peça ao usuário dois números inteiros: o dividendo e 
o divisor. Em seguida, calcule e mostre na tela o quociente e o resto da divisão inteira, 
junto com os valores do dividendo e do divisor.*/

#include <stdio.h>

int main() {
    int dividendo, divisor, quociente, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("\nResultados:\n");
    printf("a. Dividendo: %d\n", dividendo);
    printf("b. Divisor: %d\n", divisor);
    printf("c. Quociente: %d\n", quociente);
    printf("d. Resto: %d\n", resto);

    return 0;
}
