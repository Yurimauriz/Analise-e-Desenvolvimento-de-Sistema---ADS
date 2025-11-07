// Crie um algoritmo que leia um número inteiro e verifique se ele é primo
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, divisores = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("O número é primo.\n");
    } else {
        printf("O número não é primo.\n");
    }

    return 0;
}
