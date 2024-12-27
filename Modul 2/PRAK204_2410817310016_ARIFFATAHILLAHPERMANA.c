#include <stdio.h>

int main() {
    double jari_jari1, tinggi1;
    double jari_jari2, tinggi2;
    double pi = 22.0 / 7.0;
    scanf("%lf", &jari_jari1);
    scanf("%lf", &tinggi1);

    double volume1 = pi * jari_jari1 * jari_jari1 * tinggi1; 
    double luas1 = 2 * pi * jari_jari1 * (jari_jari1 + tinggi1);
    double keliling1 = 2 * pi * jari_jari1; 

    printf("\nHasil untuk input 1:\n");
    printf("Volume = %.2f\n", volume1);
    printf("Luas = %.2f\n", luas1);
    printf("Keliling = %.2f\n", keliling1);
    scanf("%lf %lf", &jari_jari2, &tinggi2);

    double volume2 = pi * jari_jari2 * jari_jari2 * tinggi2; 
    double luas2 = 2 * pi * jari_jari2 * (jari_jari2 + tinggi2);
    double keliling2 = 2 * pi * jari_jari2; 
    printf("\nHasil untuk input 2:\n");
    printf("Volume = %.2f\n", volume2);
    printf("Luas = %.2f\n", luas2);
    printf("Keliling = %.2f\n", keliling2);

    return 0;
}