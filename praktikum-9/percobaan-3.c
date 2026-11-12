#include <stdio.h>

typedef struct {
    char nama[100];
    unsigned int jumlah_nilai;
    unsigned int nilai[100];
} Mahasiswa;

int main() {
    unsigned int jumlah_mahasiswa;
    printf("Jumlah mahasiswa: ");
    scanf("%u", &jumlah_mahasiswa);

    Mahasiswa mahasiswa[jumlah_mahasiswa];

    for(int i = 0; i < jumlah_mahasiswa; i++) {
        printf("Nama Mahasiswa-%u:", i+1);
        scanf("%s", &mahasiswa[i].nama);
        printf("Jumlah nilai: ");
        scanf("%d", &mahasiswa[i].jumlah_nilai);
        for(int j = 0; j < mahasiswa[i].jumlah_nilai; j++) {
            printf("Nilai-%d: ", j+1);
            scanf("%u", &mahasiswa[i].nilai[j]);
        }
        printf("\n");
    }

    for (int i = 0; i < jumlah_mahasiswa; i++) {
        unsigned int total = 0;
        for (int j = 0; j < mahasiswa[i].jumlah_nilai; j++) {
            total += mahasiswa[i].nilai[j];
        }
        printf("Nilai rata-rata %s adalah %u\n", mahasiswa[i].nama, total/mahasiswa[i].jumlah_nilai);
    }
}
