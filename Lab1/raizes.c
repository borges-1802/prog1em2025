#include <stdio.h>
    
    /* Algoritmo: resolver a equação de primeiro grau ax+b=0
    Entrada: coeficientes reais a e b da equação ax + b = 0
    Saída: resultado da equação (valor de x)
    Defesa: coef. angular não-nulo (i.e. devemos impedir a == 0).*/

int main(){
    float a;
    float b;
    float x;

    printf("Digite os coeficientes a e b: ");
    scanf("%f %f", &a, &b);

    if (a == 0){
        printf("Nao da pra ser nula meu guerreiro.");
    }
    else{
        x = ((-b)/a);
        printf("O resultado da funcao de primeiro grau eh de: %f",x);
    }   
return 0;
}
