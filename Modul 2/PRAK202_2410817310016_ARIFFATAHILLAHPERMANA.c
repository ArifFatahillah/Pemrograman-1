#include <stdio.h>

int main() {
    float nilaiPertama, nilaiKedua, hasil;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &nilaiPertama);

    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &nilaiKedua);

    hasil = nilaiPertama + nilaiKedua;

    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"\n", nilaiPertama, nilaiKedua, hasil);

    return 0;
}