#include <stdio.h>

int main() {
    int jumlah_detik;
    int hari = 0, jam = 0, menit = 0, detik = 0;

    scanf("%d", &jumlah_detik);
    
    if (jumlah_detik >= 86400) {
        hari = jumlah_detik / 86400;
        jumlah_detik = jumlah_detik % 86400;
    }
    
    if (jumlah_detik >= 3600) {
        jam = jumlah_detik / 3600;
        jumlah_detik = jumlah_detik % 3600;
    }
    
    if (jumlah_detik >= 60) {
        menit = jumlah_detik / 60;
        detik = jumlah_detik % 60;
    } else {
        detik = jumlah_detik;
    }
    
    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }
    
    return 0;
}