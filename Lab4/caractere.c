/*Este código lê um caractere do teclado e, caso o mesmo seja uma letra do alfabeto, seja minúscula ou maiúscula, o mapeia sempre para a letra ‘a’. Modifique o programa acima para que ele contemple, ao mesmo tempo,
os dois requisitos a seguir:

1) A cada letra lida, ao invés de cifrá-la cegamente para a letra ‘a’, exibir o
12o caractere seguinte à letra lida, de forma circular. Por exemplo:
‘A’ → ‘M’
‘B’ → ‘N’
‘C’ → ‘O’
...
‘O’ → ‘A’
‘P’ → ‘B’
‘Q’ → ‘C’

2) Solicite que uma nova letra seja digitada enquanto o caractere lido for uma letra do alfabeto E o total de letras já lidas e cifradas anteriormente for menor ou igual a 3;*/


#include <stdio.h>
    int main() {
    char letra;
    char cifra = 'a';
    int i = 0;

    do {
        printf("Digite uma letra: ");
        letra = getchar();
        getchar(); //lê o enter pra não retornar caractere inválido

    if (!((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))) {
        printf("Caractere invalido\n");
        continue;
}

    if (letra >= 'A' && letra <= 'Z') {
        cifra = 'A' + (letra - 'A' + 12) % 26;
    }
    
    else if (letra >= 'a' && letra <= 'z') {
        cifra = 'a' + (letra - 'a' + 12) % 26;
    }

    printf("A cifra de %c eh %c\n", letra, cifra);
    i++;
    } while (i < 3);

    return 0;
}