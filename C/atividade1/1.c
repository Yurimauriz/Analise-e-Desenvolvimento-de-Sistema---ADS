//Escreva um programa em C que leia um número e verifique se ele é positivo, negativo ou zero

#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if(numero > 0){
        printf("O numero é positivo.\n");
    }

    else{
        if(numero < 0){
            printf("O numero é negativo.\n");
        }

        else{
            printf("O numero é zero.\n");
        }
    }

    return 0;
}