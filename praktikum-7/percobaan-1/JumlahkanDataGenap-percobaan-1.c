#include "percobaan-1.h"

int jumlahkanDataGenap(int banyakData) {
    int total = 0;

    for (int i = 0; i <= banyakData; i++) {
        if (i % 2 == 0) {
            total += i;
        }
    }

    return total;
}
