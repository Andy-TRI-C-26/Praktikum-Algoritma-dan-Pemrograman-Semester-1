#include <stdio.h>

int main() {
    int m, jumlah_prima = 0, angka = 2, total = 0;
    printf("program untuk mentotal bilangan prima\n");
    printf("masukkan nilai m:\n");
    scanf("%d", &m);
    while (jumlah_prima < m) {
        int is_prime = 1;
        for (int i = 2; i <= angka / 2; i++) {
            if (angka % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            jumlah_prima++;
            printf("bilangan prima yang ke %d = %d\n", jumlah_prima, angka);
            total += angka;
        }
        angka++;
    }
    printf("\ntotal %d bil prima pertama = %d\n", m, total);
}
