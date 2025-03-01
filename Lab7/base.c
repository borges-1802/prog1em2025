/*  Crie um programa em C que lê do teclado uma base inteira positiva x
e um total de n termos, tal que n é par, e calcula recursivamente o resultado da
expressão: x^n - x^n-1 + x^x-2 - x^n-3 ... - x^3 + x^2 - x             */

#include <stdio.h>
#include <math.h>

int recursao(int x, int n){
    if (n == 1)
        return -x;
    return (int)pow(x,n) - recursao(x, n-1);
}

int main(){

    int x, n;
    printf("Digite a base natural: ");
    scanf("%i", &x);
    printf("Digite o numero de termos que teremos: ");
    scanf("%i", &n);

    printf("O resultado eh: %i", recursao(x,n));

}