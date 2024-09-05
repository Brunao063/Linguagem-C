#include <stdio.h>

typedef struct Pessoa{
    char nome[1024];
    int idade;
    char cidade[1024];
}Pessoa;

int main() {
int numPessoas, i;

printf("Digite o numero de pessoas desejado: ");
scanf("%d", &numPessoas);

struct Pessoa pessoas[numPessoas];

for(i = 0; i < numPessoas; i++){
    printf("Digite o nome da pessoa %d: ", i+1);
    scanf(" %1024[^\n]s", pessoas[i].nome);
    printf("Digite a idade da pessoa %d: ", i+1);
    scanf("%d", &pessoas[i].idade);
    printf("Digite a cidade da pessoa %d: ", i+1);
    scanf(" %1024[^\n]s", pessoas[i].cidade);
}

printf("\nInformacoes das pessoas:\n");
for(i = 0; i < numPessoas; i++){
    printf("\n\nNome: %s", pessoas[i].nome);
    printf("\nIdade: %d", pessoas[i].idade);
    printf("\nCidade: %s", pessoas[i].cidade);
}

return 0;
}