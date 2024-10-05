#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    // Solicita ao usu�rio para informar a string.
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  // L� a string com espa�os.

    // Percorre a string para contar quantas vezes 'a' ou 'A' aparecem.
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    // Exibe a quantidade de vezes que 'a' ou 'A' aparece.
    if (count > 0) {
        printf("A letra 'a' aparece %d vez(es) na string.\n", count);
    } else {
        printf("A letra 'a' nao foi encontrada na string.\n");
    }

    return 0;
}

