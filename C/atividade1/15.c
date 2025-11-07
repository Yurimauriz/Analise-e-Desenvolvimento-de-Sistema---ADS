//Faça um programa que leia um número inteiro e calcule o fatorial dele usando o laço for
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;
    int fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %d\n", num, fatorial);

    return 0;
}
