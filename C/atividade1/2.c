//Crie um programa que leia três números e determine qual é o maior entre eles
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c ){
        printf("O maior numero é %d", a);
    }

    else if(b > a && b > c){
        printf("O maior numero é %d", b);
    }

    else if (c > a && c > b){
        printf("O maior numero é %d", c);
    }

    else{
        printf("Existem números iguais entre os maiores.\n");
    }
    
    return 0;
}