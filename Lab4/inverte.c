/*Atividade 3: Modifique o programa anterior, incluindo a seguinte funcionalidade: caso o usuário informe um valor negativo, a imagem deverá ser “invertida”. Por exemplo, se o usuário informar -6, a imagem acima
deverá ser impressa como segue:
*
**
***
****
*****
****** */

#include <stdio.h>

int main(){

    int numero, i = 0;

    printf("Insira um numero de 1 a 10: ");
    scanf("%i", &numero);

    if(numero < -10 || numero > 10){
        printf("Po irmao eh de 1 a 10.");
        return 1;
    }

        if(numero > 0){
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

        else if(numero < 0){
            numero = -numero;
            while(i < numero){
                int j = 0;
                while(j <= i){
                    printf("*");
                    j++;
                }
                printf("\n");
                i++;
        }   
        }
        else{
            printf("Vazio.");
            }
    
    return 0;
    }