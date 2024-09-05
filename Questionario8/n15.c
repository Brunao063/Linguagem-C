#include <stdio.h>

int main(void) {
    int num[10];
    int nums = 0;
    int i = 0;

    while (i < 10) {
        printf("Digite um numero: ");
        scanf("%d", &num[nums]);
        nums++;
        i++;
    }

    printf("\nNumeros positivos:\n");

    for (int i = 0; i < 10; i++) {
        if (num[i] > 0) {
            printf("%d\n", num[i]);
        }
    }

    return 0;
}