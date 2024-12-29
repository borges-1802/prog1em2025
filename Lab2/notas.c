/*
Escreva um programa que receba três notas (avaliações de provas) e retorne a média
aritmética entre as duas maiores. Teste seu programa com diferentes valores de
entrada.

Descrição: <o que o programa faz>
Entrada: Três notas
Saída: Média entre duas maiores notas
Defesa: possíveis restrições de entrada

*/

#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float maior1, maior2;
    float media;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);

    if(nota1 >= nota2 && nota1 >= nota3){
        maior1 = nota1;
        if (nota2 >= nota3) {
            maior2 = nota2;
        } else {
            maior2 = nota3;
        }
    }

    else if(nota2 >= nota1 && nota2 >= nota3){
        maior1 = nota2;
        if (nota1 >= nota3) {
            maior2 = nota1;
        } else {
            maior2 = nota3;
        }
    }
    else{
        maior1 = nota3;
        if (nota1 >= nota2) {
            maior2 = nota1;
        } else {
            maior2 = nota2;
        }
    }

    media = (maior1 + maior2)/2;
    printf("A media das duas maiores notas eh: %.1f\n", media);
    
return 0;
}