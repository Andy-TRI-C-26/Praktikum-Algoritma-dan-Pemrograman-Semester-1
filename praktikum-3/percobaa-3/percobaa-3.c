#include <stdio.h>

int main() {
    int a, b, c;
    printf("masukkan bilangan pertama");
    scanf("%d", &a);
    printf("masukkan bilangan kedua");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("jadi bilangan pertama sekarang %d\n", a);
    printf("jadi bilangan kedua sekarang %d\n", b);
}
