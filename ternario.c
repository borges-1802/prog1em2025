/*(<expr avaliada>) ? <expr se V> : <expr se F>

Operadores ternários podem ser aninhados. Por exemplo, podemos substituir <expr se V> por:
(<expr avaliada>) ? (<expr 2>) ? <expr se V> : <expr se F> : <expr se F>


(a) receber um inteiro e retornar -1 se ele for par e 1 se ele for ímpar;
(b) receber um racional e retornar 1 se ele for positivo e 0 caso contrário;
(c) receber três racionais e retornar o maior deles;
(d) receber três racionais e retornar a média aritmética dos dois maiores;
(e) receber um caractere e retornar:
    ‘m’ se ele for uma letra minúscula do alfabeto;
    ‘M’ se ele for uma letra maiúscula do alfabeto;
    ‘?’ se for um outro caractere qualquer.*/

#include <stdio.h>

int main(){
    
    int inteiro;
    float racional;
    float r1, r2, r3;
    float r4, r5, r6, maior1, maior2;
    char c, letra;

    // (a) receber um inteiro e retornar -1 se ele for par e 1 se ele for ímpar.
    printf("Me ve um numero inteiro: ");
    scanf("%d", &inteiro);

    int par = (inteiro % 2 == 0) ? -1 : 1;
    printf("Ficou %d.", par);

    // (b) receber um racional e retornar 1 se ele for positivo e 0 caso contrário.
    printf("\nAgora me ve um racional: ");
    scanf("%f", &racional);

    float positivo = (racional>=0) ? 1 : 0;
    printf("Entao ele eh %.0f.", positivo);

    //(c) receber três racionais e retornar o maior deles.

    printf("\nAgora me ve tres numeros racionais: ");
    scanf("%f", &r1);
    scanf("%f", &r2);
    scanf("%f", &r3);

    float maior = (r1 > r2 && r1 > r3) ? r1 : (r2 > r3) ? r2 : r3;
    printf("O maior eh %.1f.", maior);

    // (d) receber três racionais e retornar a média aritmética dos dois maiores.
    printf("\nVe mais tres numeros racionais: ");
    scanf("%f", &r4);
    scanf("%f", &r5);
    scanf("%f", &r6);

    if (r4 >= r5 && r4 >= r6){
        maior1 = r4;
        maior2 = (r5 > r6) ? r5 : r6;
    }

    else if (r5 >= r4 && r5 >= r6){
        maior1 = r5;
        maior2 = (r4 > r6) ? r4 : r6;
    }
    else{
        maior1 = r6;
        maior2 = (r4 > r5) ? r4 : r5;
    }

    float media = (maior1 + maior2)/2;
    printf("A media dos dois maiores eh: %.1f", media);

/*(e) receber um caractere e retornar:
    ‘m’ se ele for uma letra minúscula do alfabeto;
    ‘M’ se ele for uma letra maiúscula do alfabeto;
    ‘?’ se for um outro caractere qualquer.*/

    printf("\nAgora me ve uma letra: ");
    scanf(" %c", &c);

    letra = ('a' <= c && c <= 'z') ? 'm' : ('A' <= c && c <= 'Z') ? 'M' : '?';
    printf("Entao: %c", letra);

    return 0;
}