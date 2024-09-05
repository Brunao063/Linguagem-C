#include <stdio.h>

int main() {
    int a = 2, b = 5, *p1, *p2;

    p1 = &a;
    p2 = &b;
    *p2 = *p1 * 3;
    a = *p2 - *p1;
    p1 = &b;
    *p1 = *p1 / 2;
    b = a + *p2;
    (*p2)--;

    printf("&a = %p, a = %d", &a, a);
    printf("\n&b = %p, b = %d", &b, b);
    printf("\n&p1 = %p, p1 = %p", &p1, p1);
    printf("\n&p1 = %p, *p1 = %d", &p1, *p1);
    printf("\n&p2 = %p, p2 = %p", &p2, p2);
    printf("\n&p2 = %p, *p2 = %d", &p2, *p2);
}