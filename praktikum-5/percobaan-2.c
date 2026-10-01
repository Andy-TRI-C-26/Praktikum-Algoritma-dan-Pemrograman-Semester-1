//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    int pengulangan_ke = 1, ulangi = 1, hasil = 0;
//    while (ulangi) {
//        int bilangan;
//        printf("Masukkan bilangan ke-%d : ", pengulangan_ke);
//        scanf("%d", &bilangan);
//        hasil = hasil + bilangan;
//        printf("Mau memasukkan data lagi [y/t] ?");
//        char confirm;
//        scanf(" %c", &confirm);
//        confirm = tolower(confirm);
//        if (confirm == 'y' || confirm == 't') {
//            ulangi = confirm == 'y';
//            pengulangan_ke++;
//        } else {
//            printf("karakter tidak valid\n");
//            printf("program dianggap selesai\n");
//            ulangi = 0;
//        }
//    }
//    printf("Total bilangan = %d", hasil);
//}
