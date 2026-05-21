/* Crie um programa em C que peça ao usuário um número real e mostre na 
tela quanto é a terça parte desse número, formatando o resultado com duas casas decimais*/

#include <stdio.h>

int main() {
    float N, TercaParte;
    
    printf("Digite um número: ");
    scanf("%f", &N);
    
    TercaParte = N / 3;
   
    printf("A terça parte de %.2f é %.2f\n", N, TercaParte);
    
    return 0;
}
