#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2) {
    return nilai1 - nilai2; 
}

int mutlak(int angka) {
    return (angka < 0) ? -angka : angka;
}

int main() {
    int a, b, c, d;
    scanf("%d", &a); 
    scanf("%d", &b); 
    scanf("%d", &c); 
    scanf("%d", &d); 
    int Hasil = mutlak(hitung(a, c)) + mutlak(hitung(b, d)); 
    printf("%d", Hasil); 
    return 0;
}