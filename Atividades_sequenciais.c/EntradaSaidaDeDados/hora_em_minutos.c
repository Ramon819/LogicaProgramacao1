/*Faça um programa em C que peça ao usuário uma hora do dia (entre 0 e 23) e 
calcule quantos minutos se passaram desde o início do dia, exibindo o resultado na tela.*/

#include <stdio.h>

int main() {
    int hora, minutosTotais;

    printf("Digite a hora (0 a 23): ");
    scanf("%d", &hora);
        
        minutosTotais = hora * 60;
        printf("Desde o início do dia se passaram %d minutos.\n", minutosTotais);
    
    return 0;
}
