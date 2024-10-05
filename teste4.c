#include <stdio.h>

int main() {
    // Sequência a) 1, 3, 5, 7, ___ (Próximo número: +2)
    int a[] = {1, 3, 5, 7};
    int next_a = a[3] + 2;
    
    // Sequência b) 2, 4, 8, 16, 32, 64, ____ (Próximo número: *2)
    int b[] = {2, 4, 8, 16, 32, 64};
    int next_b = b[5] * 2;
    
    // Sequência c) 0, 1, 4, 9, 16, 25, 36, ____ (Próximo número: quadrados perfeitos)
    int c[] = {0, 1, 4, 9, 16, 25, 36};
    int next_c = (7 * 7);  // Próximo quadrado perfeito (7^2)
    
    // Sequência d) 4, 16, 36, 64, ____ (Próximo número: quadrados de números pares)
    int d[] = {4, 16, 36, 64};
    int next_d = (10 * 10);  // Próximo quadrado de número par (10^2)
    
    // Sequência e) 1, 1, 2, 3, 5, 8, ____ (Próximo número: sequência de Fibonacci)
    int e[] = {1, 1, 2, 3, 5, 8};
    int next_e = e[4] + e[5];  // Próximo número da sequência de Fibonacci
    
    // Sequência f) 2, 10, 12, 16, 17, 18, 19, ____ (Próximo número: 20)
    int f[] = {2, 10, 12, 16, 17, 18, 19};
    int next_f = 20;  // A sequência segue os números a partir de 16

    // Imprimindo os resultados
    printf("Proximo numero na sequencia a): %d\n", next_a);
    printf("Proximo numero na sequencia b): %d\n", next_b);
    printf("Proximo numero na sequencia c): %d\n", next_c);
    printf("Proximo numero na sequencia d): %d\n", next_d);
    printf("Proximo numero na sequencia e): %d\n", next_e);
    printf("Proximo numero na sequencia f): %d\n", next_f);

    return 0;
}

