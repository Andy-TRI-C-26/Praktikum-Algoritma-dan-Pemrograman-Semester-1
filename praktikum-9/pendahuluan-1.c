#include <stdio.h>

int main() {
    int nilai[3];
    float rata_rata;
    int total = 0;

    printf("Masukkan nilai matematika:");
    scanf("%d", &nilai[0]);

    printf("Masukkan nilai Fisika:");
    scanf("%d", &nilai[1]);

    printf("Masukkan nilai Kimia:");
    scanf("%d", &nilai[2]);

    for (int i = 0; i < 3; i++) {
        total += nilai[i];
    }

    rata_rata = (float) total / 3;

    printf("Nilai rata-ratanya adalah %.0f\n", rata_rata);

    return 0;
}
