//Escreva um programa que leia 10 números e mostre quantos deles estão entre 10 e 50
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, contador = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num >= 10 && num <= 50) {
            contador++;
        }
    }

    printf("\nQuantidade de números entre 10 e 50: %d\n", contador);

    return 0;
}
