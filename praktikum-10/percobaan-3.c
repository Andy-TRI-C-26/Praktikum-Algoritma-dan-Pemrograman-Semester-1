#include <stdio.h>
#include <string.h>

int main() {
   char s1[100], s2[100];

   printf("Masukkan string pertama : ");
   fgets(s1, sizeof(s1), stdin);
   s1[strcspn(s1, "\n")] = '\0';

   printf("Masukkan string kedua   : ");
   fgets(s2, sizeof(s2), stdin);
   s2[strcspn(s2, "\n")] = '\0';

   if (strcmp(s1, s2) == 0)
       printf("kedua string sama\n");
   else
       printf("kedua string tidak sama\n");

   return 0;
}
