//Faça um programa que leia várias idades e calcule a média, parando quando o usuário digitar uma idade negativa.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, soma = 0, contador = 0;
    float media;

    printf("Digite as idades (negativa para parar):\n");

    while (1) {
        scanf("%d", &idade);

        if (idade < 0)
            break;

        soma += idade;
        contador++;
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("A média das idades é: %.2f\n", media);
    } else {
        printf("Nenhuma idade válida foi digitada.\n");
    }

    return 0;
}
