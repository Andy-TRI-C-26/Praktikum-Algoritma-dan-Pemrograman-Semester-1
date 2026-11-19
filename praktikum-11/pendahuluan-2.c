#include <stdio.h>

int main(void)
{
    const char *kata = "TELEKOMUNIKASI";

    printf("Huruf ketiga: %c\n", *(kata + 2));

    return 0;
}