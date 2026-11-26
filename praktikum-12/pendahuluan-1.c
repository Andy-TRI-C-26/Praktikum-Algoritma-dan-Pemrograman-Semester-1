#include <stdio.h>
int main()
{
    int a = 4;
    int b = 7;
    int *x, *y;
    x = &a;
    y = &b;
    printf("SEMULA : a = %d b = %d\n", a, b);
    *x = *x * 4;
    *y = *y + *x;
    printf("KINI : a = %d b = %d\n", a, b);
}