#include <stdio.h>

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;

    while (K <= INDICE) {
        SOMA = SOMA + K;
        K = K + 1;
    }

    printf("O valor da SOMA ao final do processamento eh: %d\n", SOMA);

    return 0;
}

