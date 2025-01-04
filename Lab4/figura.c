/*Escreva um programa em C que imprima uma figura como a mostrada abaixo. O número de linhas da figura deve ser informado pelo usuário e não pode ultrapassar 10. Caso ultrapasse, informar o erro e terminar o
programa. Note que, no exemplo abaixo, o número de linhas informado pelo usuário foi 6. Utilize o comando de repetição while.
******
*****
****
***
**
*      */

#include <stdio.h>

int main(){

    int numero, i = 0;

    printf("Insira um numero de 1 a 10: ");
    scanf("%i", &numero);

    if(numero < 1 || numero > 10){
        printf("Po irmao eh de 1 a 10.");
        return 1;
    }

    else{

        while(i < numero){
            int j = 0;
            while (j < (numero - i)){
                printf("*");
                j++;
            }
            printf("\n");
            i++;
        }
    }

    return 0;
}