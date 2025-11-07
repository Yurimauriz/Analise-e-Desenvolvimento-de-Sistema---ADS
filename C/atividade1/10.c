//Escreva um programa que leia uma senha e repita a solicitação até que a senha correta seja digitada (use while)
#include <stdio.h>
#include <stdlib.h>

int main (){
    int senha;

    printf("Digite uma senha: ");
    scanf("%d", &senha);

    while (senha != 2200){
        printf("Tente novamente senha errada: ");
        scanf("%d", &senha);
    }

    printf("A senha esta correta! \n");

    return 0;
}