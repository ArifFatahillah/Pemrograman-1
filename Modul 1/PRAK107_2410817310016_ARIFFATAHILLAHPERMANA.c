#include <stdio.h>

int main()
{
    int a = 4;
    int b = 5;
    int c = 7;
    int harga = 85000;
    int keliling = 16;

    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tananh per meter adalah %d\n", harga);
    printf("jawaban :\n");

    int biaya_total = keliling * harga;

    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", biaya_total);
    return 0;
}