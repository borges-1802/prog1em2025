#include <stdio.h>

int main(){

    int numero, i; 

    printf("Insira um numero ai covarde: ");
    scanf("%i",&numero);

    char letra[numero];

    for (i = 0; i < numero; i++){
        printf("Coloque a letra numero %i : ", i+1);
        scanf(" %c", &letra[i]);
    }

    printf("Sua palavra final eh: %s", letra);

    return 0;
    }