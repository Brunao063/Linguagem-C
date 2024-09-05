#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado(){
    srand(time(NULL));
    return rand() % 6 + 1;
}

int main() {

    int dado = Dado();

    printf("O numero aleatorio e: %d", dado);

}