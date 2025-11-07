//Escreva um algoritmo que leia um número e mostre a tabuada desse número de 1 a 10 usando o laço for.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, i ;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}