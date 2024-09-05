#include <stdio.h>

typedef struct Livro{
    char titulo[1024];
    char autor[1024];
    int ano;
}Livro;

int main(void) {
int numLivros, i;

printf("Digite o numero de pessoas desejado: ");
scanf("%d", &numLivros);

struct Livro livros[numLivros];

for(i = 0; i < numLivros; i++){
    printf("Digite o titulo do livro %d: ", i+1);
    scanf(" %1024[^\n]s", livros[i].titulo);
    printf("Digite o autor do livro %d: ", i+1);
    scanf(" %1024[^\n]s", livros[i].autor);
    printf("Digite o ano do livro %d: ", i+1);
    scanf("%d", &livros[i].ano);
}

printf("\nInformacoes dos livros:\n");
for(i = 0; i < numLivros; i++){
    printf("\n\nTitulo: %s", livros[i].titulo);
    printf("\nAutor: %s", livros[i].autor);
    printf("\nAno: %d", livros[i].ano);
}

return 0;
}