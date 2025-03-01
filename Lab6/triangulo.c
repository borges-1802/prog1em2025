/*Escreva uma função que receba os lados a, b, c de um triângulo e
retorne 1 se for equilátero, 2 se for isósceles e 3 se for escaleno*/

#include <stdio.h>

int triangulo(int a, int b, int c){

    if (a == b && b == c)
        return 1;
    if ((a == b) || (b == c) || (a == c))
        return 2;
    else
        return 3;
}

int main(void){
    int a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%i %i %i", &a, &b, &c);

    int tipo = triangulo(a,b,c);

    switch (tipo)
    {
    case 1:
        printf("O triangulo escolhido eh equilatero\n");
        break;

    case 2:
        printf("O triangulo escolhido eh isosceles\n");
        break;

    case 3:
        printf("O triangulo escolhido eh escaleno\n");
        break;
    }

}