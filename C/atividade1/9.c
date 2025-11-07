// Faça um algoritmo que calcule a soma dos números de 1 a 100 usando o laço for
#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, soma = 0;

    for (i = 1; i <= 100 ; i++){
        soma += i;
    }

    printf("A soma dos numeros é: %d",soma);
    
    return 0;
}