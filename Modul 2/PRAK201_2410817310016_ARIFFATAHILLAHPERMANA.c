#include <stdio.h>
int main() {
    double nim;
    const char* urutan[] = {
        "tidak ada", "Januari", "Februari", "Maret", "April", "Mei", "Juni", 
        "Juli", "Agustus", "September", "Oktober", "November", "Desember"
    };
    char nama[100];
    int tanggal;
    int bulan;
    int tahun;
    rintf("Masukan nama: ");
    scanf("%s", nama);
    printf("Masukan NIM: ");
    scanf("%lf", &nim);
    printf("Masukan tanggal lahir: ");
    scanf("%d", &tanggal);
    printf("Masukan bulan lahir: ");
    scanf("%d", &bulan);
    printf("Masukan tahun lahir: ");
    scanf("%d", &tahun);
    printf("NIM: %.2lf\n", nim);
    printf("Nama: %s\n", nama);
    printf("Tanggal lahir: %d\n", tanggal);
    printf("Bulan lahir: %s\n", urutan[bulan]);
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("Tahun lahir: %d (kabisat)\n", tahun);
    } else {
        printf("Tahun lahir: %d\n", tahun);
    }
    return 0;
}