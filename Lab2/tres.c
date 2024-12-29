/*Escreva um programa que receba um número inteiro N de 3 dígitos e informe se
esse número satisfaz a relação acima. Considere apenas valores positivos. Se o total
de dígitos do valor de entrada for diferente de 3, o programa deve informar o erro ao
usuário e terminar a execução.

N = centenas^3 + dezenas^3 + unidades^3

*/

#include <stdio.h>
#include <math.h>

int main(){

    int numero, c, d, u;

    printf("Digite um numero com 3 digitos: ");
    scanf("%d",&numero);

    if (numero < 100 || numero > 999){
        printf("Po meu guerreiro eu pedi 3 numeros.");
    }

    else{
        c = numero/100;
        d = (numero%100)/10;
        u = numero%10;
        printf("Ta ai: %d, %d, %d", c,d,u);
    }

    if(numero == (pow(c,3) + pow(d,3) + pow(u,3))){
        printf("\nO numero satisfaz a relacao informada.");
    }
    else{
        printf("\nO numero nao satisfaz a relacao informada.");
    }
    
    return 0;
}
