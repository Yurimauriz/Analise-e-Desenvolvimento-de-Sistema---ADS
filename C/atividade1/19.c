//Desenvolva um algoritmo que leia um número N e mostre os N primeiros números da sequência de Fibonacci.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite a quantidade de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci com %d termos:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    return 0;
}
