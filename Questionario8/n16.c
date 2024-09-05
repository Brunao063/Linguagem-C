#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[1024];
    int qtdvogais = 0;

    printf("Digite o que desejar: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < (int) strlen(frase); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || 
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            printf("(%d) - %c\n", i, frase[i]);
            qtdvogais++;
        }
    }

    printf("A frase tem %d vogais\n", qtdvogais);

    return 0;
}