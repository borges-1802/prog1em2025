/*Escreva um programa que receba duas notas e compare a média aritmética
destas com um valor constante igual a 5, que representa o limiar de aprovação. Caso a
média seja maior ou igual ao limiar, informar “Aprovado”. Imprimir “Reprovado” caso
contrário. Para a declaração da constante, utilize o modificador const em uma variável.*/

#include <stdio.h>

int main(){

    float nota1, nota2, media;
    const float LIMIAR = 5;

    printf("Informe sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if(media<LIMIAR){
        printf("Reprovado.");
    }
    else{
        printf("Aprovado.");
    }
    
    return 0;
}