#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kalimat[100];
    int i, n, palindrom = 1;

    printf("Kalimat : ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = '\0';

    n = strlen(kalimat);

    /* bandingkan karakter depan dengan karakter belakang */
    for (i = 0; i < n / 2; i++) {
        if (toupper(kalimat[i]) != toupper(kalimat[n - 1 - i])) {
            palindrom = 0;
            break;
        }
    }

    if (palindrom)
        printf("Termasuk PALINDROM\n");
    else
        printf("Bukan PALINDROM\n");

    return 0;
}
