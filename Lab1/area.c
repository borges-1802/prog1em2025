/* Escreva um programa em C para calcular a área da coroa circular (anel) formada por dois círculos de raios r1
e r2. Considere Pi = 3.14. Projete primeiro o algoritmo que resolve esse problema e depois escreva esse
algoritmo na linguagem C. Teste o seu programa pelo menos para os seguintes pares de entrada:
• 2 e 1; resposta esperada: 9.42
• 15 e 5; resposta esperada: 628
• 100 e 0; resposta esperada: 31400 */

// Algoritmo: Calcular área da coroa circular
// Entrada: raio1, raio2
// Saída: Resultado da área da coroa
// Formula: pi * (raio1^2 - raio2^2)

#include <stdio.h>

int main(){
    float raio1;
    float raio2;
    float raioMaior;
    float raioMenor;
    float pi = 3.14;
    float area;

    printf("Digite o valor do raio maior: ");
    scanf("%f", &raio1);
    printf("Digite o valor do raio menor: ");
    scanf("%f", &raio2);

    if(raio1 <= raio2){
        printf("O primeiro raio precisa ser maior do que o segundo.");
    }
    
    else{
        raioMaior = raio1 * raio1;
        raioMenor = raio2 * raio2;
        area = (pi * (raioMaior - raioMenor));

        printf("A área da coroa circular eh de: %.1f", area);
    }
    return 0;
}
