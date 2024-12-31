/*Substituir o comando de seleção if-else pelo switch-case no trecho de código
abaixo.*/

#include <stdio.h>

int main(){
    float a, b;
    char operador;

    printf("Digite uma operacao aritmetica entre dois numeros a e b, no formato \"a <operacao> b\":\n");
    scanf("%f %c %f", &a, &operador, &b);

    switch (operador){
    case '+':
        printf("%.2f\n", a + b);    
    break;

    case '-':
        printf("%.2f\n", a - b);
    break;

    case '/':
        printf("%.2f\n", a/b);
    break;

    case '*':
        printf("%.2f\n", a * b);
    break;

    default:
        printf("Tente novamente.");
    break;
    }
    
    return 0;
}