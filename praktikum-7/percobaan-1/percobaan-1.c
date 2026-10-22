#include <stdio.h>
#include "percobaan-1.h"

int main() {
    int banyakData;
    printf("Masukkan banyak data: ");
    scanf("%d", &banyakData);

    printf("Jumlah data genap adalah %d\n", jumlahkanDataGenap(banyakData));
}
