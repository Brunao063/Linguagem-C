#include<stdio.h>

typedef struct aluno{
    char nome[1024];
    int idade;
    int matricula;
    float media;
}aluno;

int main() {

    int numAlunos, i;

    printf("Digite o numero de alunos desejado: ");
    scanf("%d", &numAlunos);

    struct aluno alunos[numAlunos];

    for(i = 0; i < numAlunos; i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf(" %1023[^\n]s", alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i+1);
        scanf("%d", &alunos[i].idade);
        printf("Digite o numero de matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite a media do aluno %d: ", i+1);
        scanf("%f", &alunos[i].media);
    }

    printf("\nInformacoes dos alunos");
    for(i = 0; i < numAlunos; i++){
        printf("\n\nNome: %s", alunos[i].nome);
        printf("\nIdade: %d", alunos[i].idade);
        printf("\nMatricula: %d", alunos[i].matricula);
        printf("\nMedia: %.2f", alunos[i].media);
    }

return 0;
}