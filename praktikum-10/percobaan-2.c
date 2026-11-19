#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int i;

   printf("Masukkan string: ");
   fgets(str, sizeof(str), stdin);
   str[strcspn(str, "\n")] = '\0';

   for (i = 0; str[i] != '\0'; i++) {
       if (str[i] == 'a')
           str[i] = 'i';
       /* tambahkan: else if (str[i] == 'A') str[i] = 'I';
          jika huruf kapital juga ingin diganti */
   }

   printf("Hasil: %s\n", str);
   return 0;
}
