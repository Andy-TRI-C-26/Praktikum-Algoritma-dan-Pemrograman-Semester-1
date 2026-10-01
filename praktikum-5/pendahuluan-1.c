//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//    int ulangi;
//    do {
//        int bilangan_pilihan, bilangan_pembagi;
//        puts("masukkan suatu bilangan");
//        scanf("%d", &bilangan_pilihan);
//        puts("masukkan bilangan pembagi (2/3/4/5)");
//        scanf("%d", &bilangan_pembagi);
//        printf("bilangan yang dipilih:%d\n", bilangan_pilihan);
//        printf("bilangan pembagi:%d\n", bilangan_pembagi);
//
//        int sisa_bagi = bilangan_pilihan % bilangan_pembagi;
//        if (sisa_bagi == 0) {
//            puts("sisa bagi:tidak ada");
//        } else {
//            printf("sisa bagi:%d\n", sisa_bagi);
//        }
//
//        puts("apakah anda ingin meneruskan (Y/T)");
//        char meneruskan;
//        scanf(" %c", &meneruskan);
//        ulangi = toupper(meneruskan) == 'Y';
//    } while (ulangi);
//}
