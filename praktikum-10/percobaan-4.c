#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define JUMLAH 4
#define PANJANG 50

/* Huruf pertama tiap kata jadi kapital, sisanya kecil */
void kapitalisasi(char *s) {
   int i, awalKata = 1;
   for (i = 0; s[i] != '\0'; i++) {
       if (isspace((unsigned char)s[i])) {
           awalKata = 1;
       } else if (awalKata) {
           s[i] = toupper((unsigned char)s[i]);
           awalKata = 0;
       } else {
           s[i] = tolower((unsigned char)s[i]);
       }
   }
}

int main() {
   char nama[JUMLAH][PANJANG], temp[PANJANG];
   int i, j;

   for (i = 0; i < JUMLAH; i++) {
       printf("Nama ke-%d: ", i + 1);
       fgets(nama[i], PANJANG, stdin);
       nama[i][strcspn(nama[i], "\n")] = '\0';
   }

   printf("\nSebelum diurutkan\n");
   for (i = 0; i < JUMLAH; i++)
       printf("Nama ke-%d: %s\n", i + 1, nama[i]);

   /* seragamkan huruf kapital agar pengurutan konsisten */
   for (i = 0; i < JUMLAH; i++)
       kapitalisasi(nama[i]);

   /* bubble sort A-Z */
   for (i = 0; i < JUMLAH - 1; i++) {
       for (j = 0; j < JUMLAH - 1 - i; j++) {
           if (strcmp(nama[j], nama[j + 1]) > 0) {
               strcpy(temp, nama[j]);
               strcpy(nama[j], nama[j + 1]);
               strcpy(nama[j + 1], temp);
           }
       }
   }

   printf("\nSesudah diurutkan\n");
   for (i = 0; i < JUMLAH; i++)
       printf("Nama ke-%d: %s\n", i + 1, nama[i]);

   return 0;
}
