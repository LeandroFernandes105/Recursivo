#include <stdio.h>

void decimalParaBinarioRecursivo(int numero) {
    if (numero > 0) {
            decimalParaBinarioRecursivo(numero / 2);
        printf("%d", numero % 2);
    }
}

int main() {
    int numero;




    printf("Digite um número decimal: ");
            scanf("%d", &numero);




    printf("O número binário correspondente é: ");
        decimalParaBinarioRecursivo(numero);

        printf("\n");

    return 0;
}
