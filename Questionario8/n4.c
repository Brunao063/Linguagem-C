#include <stdio.h>

int main(void) {
int num, num1, num2;
int vetor[10];

printf("Digite qual a operacao desejada:\n (1)Soma\n (2)Subtracao\n (3)Multiplicacao\n (4)Divisao\n (5)Sair\n");
scanf("%d", &num);

switch (num) {
    case 1:
        puts("Soma");
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        printf("A soma dos numeros eh: %d\n", num1 + num2);
        break;
    case 2:
        puts("Subtracao");
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        printf("A subtracao dos numeros eh: %d\n", num1 - num2);
        break;
    case 3:
        puts("Multiplicacao");
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        printf("A multiplicacao dos numeros eh: %d\n", num1 * num2);
        break;
    case 4:
        puts("Divisao");
        printf("Digite o dividendo: ");
        scanf("%d", &num1);
        printf("Digite o divisor: ");
        scanf("%d", &num2);
        if (num2!= 0) {
            printf("A divisao dos numeros eh: %.2f\n", (float)num1 / num2);
        } else {
            puts("Erro: Divisao por zero!");
        }
        break;
    case 5:
        puts("Sair");
        break;
    default:
        puts("Opcao invalida");
}

return 0;
}