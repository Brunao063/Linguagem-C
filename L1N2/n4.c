#include <stdio.h>

typedef struct funcionario{
    char nome[1024];
    char cargo[1024];
    float salario;
}funcionario;

int main(void) {
int numPessoas, i;

printf("Digite o numero de funcionarios desejado: ");
scanf("%d", &numPessoas);

struct funcionario pessoas[numPessoas];

for(i = 0; i < numPessoas; i++){
    printf("Digite o nome do funcionario %d: ", i+1);
    scanf(" %1024[^\n]s", pessoas[i].nome);
    printf("Digite o cargo do funcionario %d: ", i+1);
    scanf(" %1024[^\n]s", pessoas[i].cargo);
    printf("Digite a cidade do funcionario %d: ", i+1);
    scanf("%f", &pessoas[i].salario);
}

printf("\nInformacoes dos funcionarios:\n");
for(i = 0; i < numPessoas; i++){
    printf("\n\nNome: %s", pessoas[i].nome);
    printf("\nIdade: %s", pessoas[i].cargo);
    printf("\nCidade: %.2f", pessoas[i].salario);
}

return 0;
}
