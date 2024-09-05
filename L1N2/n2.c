#include<stdio.h>

typedef struct Produto{
    char nome[1024];
    float preco;
    int Qtd;
}Produto;

int main(void){

int QtdProdutos, i;

printf("Digite quantos produtos desejada cadastrar: ");
scanf("%d", &QtdProdutos);

struct Produto produtos[QtdProdutos];

for(i = 0; i < QtdProdutos; i++){
    printf("Digite o nome do produto %d: ", i+1); 
    scanf(" %1024[^\n]s", produtos[i].nome);
    printf("Digite o preco do produto %d: ", i+1);
    scanf("%f", &produtos[i].preco);
    printf("Digite a quantidade do produtos em estoque %d: ", i+1);
    scanf("%d", &produtos[i].Qtd);
}

for(i = 0; i < QtdProdutos; i++){
    printf("\n\nNome do produto: %s", produtos[i].nome);
    printf("\nPreco: %.2f", produtos[i].preco);
    printf("\nQuantidade em estoque: %d", produtos[i].Qtd);
}

return 0;
}