#include <stdio.h>

int main() {
    int x = 1, y = 4, z, *p1, *p2, *p3;

    p1 = &x;
    p2 = &y;
    z = *p1 + *p2;
    p3 = &z;
    *p3 = *p3 * 2;
    y = *p1 + *p3;
    *p1 = *p2 - *p3;
    (*p2)++;

    printf("&x = %p, x = %d", &x, x);
    printf("\n&y = %p, y = %d", &y, y);
    printf("\n&z = %p, z = %d", &z, z);
    printf("\n&p1 = %p, p1 = %p", &p1, p1);
    printf("\n&p1 = %p, *p1 = %d", &p1, *p1);
    printf("\n&p2 = %p, p2 = %p", &p2, p2);
    printf("\n&p2 = %p, *p2 = %d", &p2, *p2);
    printf("\n&p3 = %p, p3 = %p", &p3, p3);
    printf("\n&p3 = %p, *p3 = %d", &p3, *p3);
}