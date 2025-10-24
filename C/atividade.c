#include <stdio.h>
#include <stdlib.h>

int main(){

    float notaAluno;
    printf("Digite a nota do aluno: ");
    scanf("%d", &notaAluno);

    if(notaAluno >= 30 && notaAluno < 60 ){
        printf("O aluno tem que fazer a sub");
    } 

    return 0;
}