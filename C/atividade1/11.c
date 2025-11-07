//Crie um programa que leia um número e mostre todos os seus divisores usando o laço for
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++){
        if(numero % i == 0){
            printf("\n%d",i);
        }
    }

    return 0;
}