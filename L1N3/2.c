#include <stdio.h>

int main() {
    int m, n, *p1, *p2;

    m = 8;
    n = 6;
    p1 = &m;
    p2 = &n;
    *p1 = *p1 - *p2;
    p2 = &m;
    *p2 = *p2 * 2;
    n = *p1 + *p2;
    p1 = p2;
    (*p1)++;

    printf("&m = %p, m = %d", &m, m);
    printf("\n&n = %p, n = %d", &n, n);
    printf("\n&p1 = %p, p1 = %p", &p1, p1);
    printf("\n&p1 = %p, *p1 = %d", &p1, *p1);
    printf("\n&p2 = %p, p2 = %p", &p2, p2);
    printf("\n&p2 = %p, *p2 = %d", &p2, *p2);
}