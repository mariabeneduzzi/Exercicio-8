
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, binario[32];
    int i = 0;


    printf("Digite um número inteiro: ");
    scanf("%d", &numero);


    if (numero == 0) {
        printf("O número em binário é: 0\n");
        return 0;
    }


    while (numero > 0) {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    printf("O número em binário é: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
