//Escreva um programa que leia a idade de uma pessoa e informe se ela é menor de idade, adulta ou idosa
#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Digite uma idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade < 60){
        printf("A pessoa é adulta.\n ");
    }

    else if(idade >= 60){
        printf("A pessoa é idosa.\n ");
    }

    else{
        printf("A pessoa é menor de idade.\n ");
    }
    
    return 0;
}