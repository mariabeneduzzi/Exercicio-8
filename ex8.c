
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, binario[32];
    int i = 0;


    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);


    if (numero == 0) {
        printf("O n�mero em bin�rio �: 0\n");
        return 0;
    }


    while (numero > 0) {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    printf("O n�mero em bin�rio �: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
