//Desenvolva um algoritmo que leia números até que o usuário digite 0 e mostre a soma deles (use do...while).
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 1;
    int soma = 0;

    while (numero != 0){
        printf("Digite números (0 para sair):\n");
        scanf("%d", &numero);

        soma += numero;
    }

    printf("\nA soma dos números digitados é: %d\n", soma);

    return 0;
}