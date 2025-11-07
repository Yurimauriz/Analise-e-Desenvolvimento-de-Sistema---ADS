//Desenvolva um programa que leia 10 números e conte quantos são pares e quantos são ímpares
#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero,i; 
    int impares = 0, pares = 0;

    for ( i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            pares++;
        }

        else{
            impares++;
        }
    }

    printf("A quantidade de numeros pares são %d \n", pares);
    printf("A quantidade de numeros impares são %d \n", impares);

    return 0;
}
