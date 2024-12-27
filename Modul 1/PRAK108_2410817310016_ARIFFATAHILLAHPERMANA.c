#include <stdio.h>

int main()
{
    const float PI = 3.14;
    float putaran = 5;
    float jarak = 14;
    
    printf("diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran \n", putaran);
    printf("Jarak tempuh Pak Dengklek =  %.f kilometer \n", jarak);

    float rumus_keliling = jarak / putaran;
    float jari_jari = rumus_keliling / (2*PI);

    printf("jawaban");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah : Rp %.2f", jari_jari);
    return 0;}