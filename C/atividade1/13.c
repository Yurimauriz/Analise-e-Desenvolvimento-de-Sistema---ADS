// Escreva um programa que leia 5 números e exiba o maior e o menor entre eles
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, maior, menor, i;

    printf("Digite o 1º número: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    for (i = 2; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num > maior) maior = num;
        if (num < menor) menor = num;
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}