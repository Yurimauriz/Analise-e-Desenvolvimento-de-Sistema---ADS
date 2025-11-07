//Crie um algoritmo que mostre todos os números pares de 1 a 50 usando o laço while.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 1;

    while (num <= 50) {
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}
