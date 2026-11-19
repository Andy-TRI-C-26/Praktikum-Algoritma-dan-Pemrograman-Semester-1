#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
   char nama[100];
   int i, n;

   printf("Masukkan nama Anda (huruf besar): ");
   fgets(nama, sizeof(nama), stdin);
   nama[strcspn(nama, "\n")] = '\0';

   n = strlen(nama);

   /* 1. ubah ke huruf kecil semua */
   for (i = 0; i < n; i++)
       nama[i] = tolower(nama[i]);

   /* 2. balikkan urutan hurufnya */
   for (i = 0; i < n / 2; i++) {
       char temp = nama[i];
       nama[i] = nama[n - 1 - i];
       nama[n - 1 - i] = temp;
   }

   /* 3. tampilkan hasil */
   printf("Hasil: %s\n", nama);
   return 0;
}
