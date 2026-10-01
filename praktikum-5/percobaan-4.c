#include <stdio.h>
#include <ctype.h>

int main() {
    int ulangi = 1;
    while (ulangi) {
        char status;
        printf("Anda sudah sholat??(s/b)");
        scanf(" %c", &status);
        status = tolower(status);
        if (status == 's') {
            puts("Bagus!");
            ulangi = 0;
        } else if (status == 'b') {
            puts("Sholat adalah ibadah");
            ulangi = 0;
        } else {
            continue;
        }
    }
}
