#include <stdio.h>

#define PI 3.14159

void hitungLingkaranC(float r) {
    float luas = PI * r * r;
    float keliling = 2 * PI * r;

    printf("Luas Lingkaran     : %.2f\n", luas);
    printf("Keliling Lingkaran : %.2f\n\n", keliling);
}

int main() {
    float r;

    printf("--- (c) Fungsi Dengan Input & Tanpa Output ---\n");
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);

    hitungLingkaranC(r);

    return 0;
}
