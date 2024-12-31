/*Escreva um programa em C que oferece um menu de opções via switch-case para
executar as operações definidas na atividade anterior (na mesma ordem que elas foram
passadas). Declare uma pseudo-constante para cada opção (via #define, como no
exemplo da pág. 3). Acrescente uma opção para sair do programa. Caso o usuário entre
com uma opção inválida, o programa deverá informar isso e terminar.*/

#include <stdio.h>

#define OPCAO_1 1
#define OPCAO_2 2
#define OPCAO_3 3
#define OPCAO_4 4
#define OPCAO_5 5
#define OPCAO_6 6


int main(){

    int opcao;
    int inteiro;
    float racional;
    float r1, r2, r3;
    float r4, r5, r6, maior1, maior2;
    char c, letra;

    printf("Bem vindo ao seu aplicativo!");
    printf("\nEscolha uma das opçoes:");
    printf("\n\n1 - Saber se numero eh par ou impar");
    printf("\n2 - Saber se o numero eh positivo ou negativo");
    printf("\n3 - Saber qual eh o maior numero");
    printf("\n4 - Saber a media entre maiores");
    printf("\n5 - Saber se eh maiuscula ou minuscula");
    printf("\n6 - Sair do aplicativo\n");
    scanf("%d", &opcao);

    switch (opcao){
    case OPCAO_1:
        printf("Me ve um numero inteiro: ");
        scanf("%d", &inteiro);

        int par = (inteiro % 2 == 0) ? -1 : 1;
        printf("Ficou %d.", par);
        break;

        case OPCAO_2:
            printf("\nAgora me ve um racional: ");
            scanf("%f", &racional);

            float positivo = (racional>=0) ? 1 : 0;
            printf("Entao ele eh %.0f.", positivo);
        break;

        case OPCAO_3:
            printf("\nAgora me ve tres numeros racionais: ");
            scanf("%f", &r1);
            scanf("%f", &r2);
            scanf("%f", &r3);

            float maior = (r1 > r2 && r1 > r3) ? r1 : (r2 > r3) ? r2 : r3;
            printf("O maior eh %.1f.", maior);
        break;

        case OPCAO_4:
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
        break;

        case OPCAO_5:
            printf("\nAgora me ve uma letra: ");
            scanf(" %c", &c);

            letra = ('a' <= c && c <= 'z') ? 'm' : ('A' <= c && c <= 'Z') ? 'M' : '?';
            printf("Entao: %c", letra);
        break;

        case OPCAO_6:
            printf("Saindo do programa.");
        break;
    
    default:
        printf("Opcao errada meu nobre, ta de sacanagem.");
    break;
    }

   return 0;
}