#include <stdio.h>

int main() {
    int x, y, *ptr1, *ptr2;

    x = 10;
    y = 5;
    ptr1 = &x;
    ptr2 = &y;
    *ptr1 = *ptr1 + *ptr2;
    y = *ptr1 - *ptr2;
    ptr2 = ptr1;
    (*ptr2)--;
    *ptr1 = *ptr1 + 3;

    printf("&x = %p, x = %d", &x, x);
    printf("\n&y = %p, y = %d", &y, y);
    printf("\n&ptr1 = %p, ptr1 = %p", &ptr1, ptr1);
    printf("\n&ptr1 = %p, *ptr1 = %d", &ptr1, *ptr1);
    printf("\n&ptr2 = %p, ptr2 = %p", &ptr2, ptr2);
    printf("\n&ptr2 = %p, *ptr2 = %d", &ptr2, *ptr2);
}
