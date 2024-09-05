#include<stdio.h>

typedef struct aluno{
    char nome[1024];
    int idade;
    float nota;
}aluno;

int main() {

    int i;
    int numAlunos = 3;

    struct aluno alunos[numAlunos];

    for(i = 0; i < numAlunos; i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf(" %1023[^\n]s", alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i+1);
        scanf("%d", &alunos[i].idade);
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota);
    }

    printf("\nInformacoes dos alunos");
    for(i = 0; i < numAlunos; i++){
        printf("\n\nNome: %s", alunos[i].nome);
        printf("\nIdade: %d", alunos[i].idade);
        printf("\nNota: %.2f", alunos[i].nota);
    }

return 0;
}