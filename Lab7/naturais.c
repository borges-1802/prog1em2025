/*Escreva uma função recursiva que receba um número natural e retorne a soma de seus dígitos.*/

#include <stdio.h>

int recursao(int x){
    if (x < 10)
       return x;
    return x % 10 + recursao(x/10);
}

int main(){

    int n;
    printf("Digite um numero natural: ");
    scanf("%i", &n);

    printf("A soma dos digitos eh: %i", recursao(n));
}