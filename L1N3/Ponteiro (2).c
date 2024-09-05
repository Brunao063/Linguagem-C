#include <stdio.h>

int main() {
    int p = 2, q = 8, r, *p1, *p2, *p3;

    p1 = &p;
    p2 = &q;
    r = *p1 * *p2;
    p3 = &r;
    *p3 = *p3 - *p1;
    q = *p3 + *p2;
    *p1 = *p2 / *p3;
    (*p2)--;

    printf("&p = %p, p = %d", &p, p);
    printf("\n&q = %p, q = %d", &q, q);
    printf("\n&r = %p, r = %d", &r, r);
    printf("\n&p1 = %p, p1 = %p", &p1, p1);
    printf("\n&p1 = %p, *p1 = %d", &p1, *p1);
    printf("\n&p2 = %p, p2 = %p", &p2, p2);
    printf("\n&p2 = %p, *p2 = %d", &p2, *p2);
    printf("\n&p3 = %p, p3 = %p", &p3, p3);
    printf("\n&p3 = %p, *p3 = %d", &p3, *p3);
}