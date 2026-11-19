#include <stdio.h>
#include <string.h>

int main() {
    char kata[] = "POLITEKNIK";
    int n = strlen(kata);

    for (int i = n; i >= 1; i--) {
        printf("%.*s\n", i, kata);
    }
    return 0;
}