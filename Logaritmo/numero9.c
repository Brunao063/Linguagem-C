#include<stdio.h>
int main(void){

float nota, peso;
int aluno = 1;
float num = 0;
float notas = 0, pesos = 0;

printf("Digite a quantidade de alunos desejada:\n");
scanf("%f", &num);

while(num >= aluno){
    printf("Digite a nota do aluno %d:\n", aluno);
    scanf("%f", &nota);
    aluno++;
    printf("A soma das notas e: %.2f\n", notas = notas + nota);

    printf("Digite o peso da nota:\n");
    scanf("%f", &peso);
    printf("A soma dos pesos e: %.2f\n", pesos = pesos + peso);

}

printf("A media ponderada das notas e: %.2f", notas / pesos);

return 0;
}