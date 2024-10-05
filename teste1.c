#include <stdio.h>

int pertenceFibonacci(int n) {
    int a = 0, b = 1, c;

    if (n == 0 || n == 1)
        return 1;  

    while (b <= n) {
        c = a + b;
        a = b;
        b = c;

        if (b == n)
            return 1;  
    }

    return 0;  
}

int main() {
    int numero;

    // Solicita ao usuário para informar o número.
    printf("Digite um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &numero);

    // Verifica se o número pertence à sequência de Fibonacci.
    if (pertenceFibonacci(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d NAO pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}

