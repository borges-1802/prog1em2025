/* Implemente o tipo Pixel, que possuirá tão somente 3 inteiros, r, g e b, correspondentes à intensidade
dos canais Vermelho (r), Verde (g) e Azul (b), todos entre 0 e 255. Em seguida:

a) Implemente um programa onde são lidos do teclado, na main(), os valores r, g e b de 2 pixels distintos.
A partir daí, defenda os valores e, caso válidos, crie os dois pixels.

b) Crie uma função pixelSoma(), que recebe 2 pixels de entrada, soma os valores de suas cores correspondentes,
e retorna um outro pixel, com as cores somadas, limitadas a 255. Por exemplo: Para 2 pixels p1 e p2 de entrada, onde:
r1 = 0; g1 = 130; b1 = 245 e r2 = 80; g2 = 100; b2 = 55,
o pixel de retorno terá os valores r = 80; g = 230; b = 255.

c) Crie uma função pixelDif(), que recebe 2 pixels de entrada, subtrai do 1o os valores de cores 2o, e
retorna um outro pixel, com as cores resultantes da diferença, limitadas a 0.
Por exemplo: Para 2 pixels p1 e p2 de entrada, onde:
r1 = 0; g1 = 130; b1 = 245 e r2 = 80; g2 = 100; b2 = 55,
o pixel de retorno terá os valores r = 0; g = 30; b = 200.

d) Cores pastéis (ou “candy colors”) possuem baixa saturação (ao contrário das cores “vivas”) e alta luminância. Crie uma função que recebe um único pixel de entrada e retorna 1 se sua cor é pastel ou 0 caso contrário. Uma maneira simples de determinar se uma cor é pastel é verificando se todas as 3 regras abaixo se aplicam:
1) O canal de maior valor (seja r, g ou b) é exatamente igual a 255 (i.e. 100% de luminância).
2) O canal de menor valor é, no mínimo, 192 (75%) e, no máximo, 224 (88%).
3) O canal intermediário pode assumir qualquer valor entre o menor e o maior, inclusive.
*/

#include <stdio.h>

typedef struct {
    int r,g,b;
} Pixel;

Pixel pixelSoma(Pixel p1, Pixel p2){

    Pixel resultado;
    resultado.r = (p1.r + p2.r > 255) ? 255 : p1.r + p2.r;
    resultado.g = (p1.g + p2.g > 255) ? 255 : p1.g + p2.g;
    resultado.b = (p1.b + p2.b > 255) ? 255 : p1.b + p2.b;
    return resultado;
}

Pixel pixelDif(Pixel p1, Pixel p2){

    Pixel resultado;
    resultado.r = (p2.r - p1.r < 0) ? 0 : p2.r - p1.r;
    resultado.g = (p2.g - p1.g < 0) ? 0 : p2.g - p1.g;
    resultado.b = (p2.b - p1.b < 0) ? 0 : p2.b - p1.b;
    return resultado;
}

Pixel pixelPast(Pixel p1){

    Pixel resultado;
    resultado.r = p1.r;
    resultado.g = p1.g;
    resultado.b = p1.b;
    //if (resultado.r == 255 || resultado.g == 255 || resultado.b == 255)
    //return 0;

/*      1)O canal de maior valor (seja r, g ou b) é exatamente igual a 255 (i.e. 100% de
        luminância).
        2) O canal de menor valor é, no mínimo, 192 (75%) e, no máximo, 224 (88%).
        3) O canal intermediário pode assumir qualquer valor entre o menor e o maior,
        inclusive.*/
}

int main(){

    Pixel p1, p2, resultado;

    printf("Digite os tres numeros das intensidades rgb: ");
    scanf("%i %i %i", &p1.r, &p1.g, &p1.b);

    printf("Digite mais tres numeros das intensidades rgb:");
    scanf("%i %i %i", &p2.r, &p2.g, &p2.b);

    if((p1.r < 256) && (p1.g < 256) && (p1.b < 256)){
        if((p2.r < 256) && (p2.g < 256) && (p2.b< 256)){
            printf("\nVoce criou dois pixels:\nPixel Um = R: %i G: %i B: %i\nPixel Dois = R: %i G: %i B: %i", p1.r, p1.g, p1.b, p2.r, p2.g, p2.b);
        }
        else
        printf("Seu segundo pixel precisa ter as tres intensidades dentre 0 e 255.");
    }
    else
    printf("Seu segundo pixel precisa ter as tres intensidades dentre 0 e 255.");

    resultado = pixelSoma(p1, p2);
    printf("\n\nResultado da soma:\n");
    printf("Pixel Soma = R: %i, G: %i, B: %i\n", resultado.r, resultado.g, resultado.b);

    resultado = pixelDif(p1, p2);
    printf("\nResultado da diferenca:\n");
    printf("Pixel Diferenca = R: %i, G: %i, B: %i\n", resultado.r, resultado.g, resultado.b);
}