/*Escreva um programa em C que receba como entrada dois números inteiros
x e y, onde x != 0 e y >= 0, e calcule x^y (sem usar a função pow()). Utilize o comando de repetição do-while.*/
/*

rascunho:
y, i
 enquanto i < y

 multiplicado = multiplicado*x
 i++
*/

#include <stdio.h>
int main(){

    int x, y, multiplicado = 1, i = 1;

    printf("Escreva um numero base: ");
    scanf("%i", &x);
    printf("Escreva o expoente: ");
    scanf("%i", &y);

    if(x == 0 || y < 0){
        printf("Insira valores corretos.");
        return 1;
    }

    if (y == 0){
        printf("O numero %i^%i fica: 1", x, y);
    }

    else{
        do{
            multiplicado = multiplicado * x;
            i++;
        } while (i <= y);

        printf("O numero %i^%i fica: %i", x, y, multiplicado);
    }
    return 0;
}
