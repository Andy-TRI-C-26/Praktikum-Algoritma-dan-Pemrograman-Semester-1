#include <stdio.h>
#include <string.h>

int main() {
   int n, i, j;

   printf("Masukkan jumlah karakter yang akan dihitung: ");
   scanf("%d", &n);

   char kar[n];
   int sudah[n];
   memset(sudah, 0, sizeof(sudah));

   for (i = 0; i < n; i++) {
       printf("Masukkan karakter ke-%d:", i + 1);
       scanf(" %c", &kar[i]);
   }

   printf("\n");
   for (i = 0; i < n; i++) {
       if (sudah[i] == 1) continue;

       int hitung = 1;
       for (j = i + 1; j < n; j++) {
           if (kar[j] == kar[i]) {
               hitung++;
               sudah[j] = 1;
           }
       }
       printf("Frekuensi %c=%d\n", kar[i], hitung);
   }

   return 0;
}
