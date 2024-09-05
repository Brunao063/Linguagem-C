#include <stdio.h>

int main() {
    int a = 6, b = 3, c, *p1, *p2;

    p1 = &a;
    p2 = &b;
    c = *p1 / *p2;
    *p1 = c + *p2;
    p2 = &c;
    *p2 = *p2 * 3;
    b = *p1 - *p2;
    (*p1)++;

    printf("&a = %p, a = %d", &a, a);
    printf("\n&b = %p, b = %d", &b, b);
    printf("\n&c = %p, c = %d", &c, c);
    printf("\n&p1 = %p, p1 = %p", &p1, p1);
    printf("\n&p1 = %p, *p1 = %d", &p1, *p1);
    printf("\n&p2 = %p, p2 = %p", &p2, p2);
    printf("\n&p2 = %p, *p2 = %d", &p2, *p2);
}