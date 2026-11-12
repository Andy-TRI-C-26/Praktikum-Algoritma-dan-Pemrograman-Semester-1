#include <stdio.h>

#define JUMLAH 10

int main() {
   int angka[JUMLAH];
   int i, j, temp;

   printf("Masukkan %d angka:\n", JUMLAH);
   for (i = 0; i < JUMLAH; i++) {
       printf("Angka ke-%d: ", i + 1);
       scanf("%d", &angka[i]);
   }

   printf("\nData sebelum diurutkan:\n");
   for (i = 0; i < JUMLAH; i++) {
       printf("%d ", angka[i]);
   }
   printf("\n");

   for (i = 0; i < JUMLAH - 1; i++) {
       for (j = 0; j < JUMLAH - i - 1; j++) {
           if (angka[j] < angka[j + 1]) {   // diubah: > menjadi <
               // Tukar posisi
               temp = angka[j];
               angka[j] = angka[j + 1];
               angka[j + 1] = temp;
           }
       }
   }

   printf("\nData setelah diurutkan (descending):\n");   // diubah: label
   for (i = 0; i < JUMLAH; i++) {
       printf("%d ", angka[i]);
   }
   printf("\n");

   return 0;
}
