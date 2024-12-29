/* Escreva um programa que leia as coordenadas de um ponto (x, y) no plano
cartesiano e determine em qual quadrante ele está. Caso o ponto esteja sobre um
dos eixos, informe em qual eixo ele se encontra.
*/

#include <stdio.h>

int main(){

    int x;
    int y;

    printf("Digite a sua posicao no eixo x: ");
    scanf("%d", &x);
    printf("Digite a sua posicao no eixo y: ");
    scanf("%d", &y);

    if (x == 0 && y == 0){
        printf("Você esta no Eixo X e Y.");
    }
    if (x < 0 && y > 0){
        printf("Voce esta no 1 Quadrante.");
    }
    if (x == 0 && y > 0){
        printf("Voce esta no Eixo Y.");
    }
    if (x > 0 && y > 0){
        printf("Voce esta no 2 Quadrante.");
    }
    if (x < 0 && y < 0){
        printf("Voce esta no 3 Quadrante.");
    }
    if (x < 0 && y == 0){
        printf("Voce esta no Eixo X.");
    }
    if (x > 0 && y < 0){
        printf("Voce esta no 4 Quadrante.");
    }
    /*1 2
      3 4*/

    printf("\nNeeeeense!");

return 0;
}