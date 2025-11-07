// Faça um programa que leia a nota de um aluno e mostre se ele foi aprovado (nota >= 6) ou reprovado
#include <stdio.h>
#include <stdlib.h>

int main (){
    float nota;
    printf("Digite uma nota: ");
    scanf("%f", &nota);

    if (nota >= 6){
        printf("aprovado");
    }

    else{
        printf("Reprovado");
    }

    return 0;
}