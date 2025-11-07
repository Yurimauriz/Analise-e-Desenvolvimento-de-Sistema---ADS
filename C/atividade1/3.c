//Desenvolva um algoritmo que leia um número inteiro e verifique se ele é par ou ímpar.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("O numero %d é par", numero);
    }

    else{
        printf("O numero %d é impar", numero);
    }

    return 0;
}