#include <stdio.h>
#include <string.h>

int main() {
   char str[100];

   printf("Masukkan String:");
   fgets(str, sizeof(str), stdin);
   str[strcspn(str, "\n")] = '\0';   /* buang karakter newline */

   printf("Jadi panjang stringnya adalah %d\n", (int)strlen(str));
   return 0;
}
