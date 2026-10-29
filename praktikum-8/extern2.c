///* File program : ekstern2.c
//Contoh program yang menggunakan variabel eksternal dan
//memakai kata kunci extern */
//
//#include <stdio.h>
//
//int i = 273; /* variabel eksternal */
//
//void tambah(void);
//
//main() {
//    extern int i; /* variabel eksternal */
//    printf("Nilai awal i = %d\n", i);
//    i += 7;
//    printf("Nilai i kini = %d\n", i);
//    tambah();
//    printf("Nilai i kini = %d\n", i);
//    tambah();
//    printf("Nilai i kini = %d\n", i);
//}
//
//void tambah(void) {
//    extern int i; /* variabel eksternal */
//    i++;
//}
