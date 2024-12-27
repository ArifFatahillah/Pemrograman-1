#include <stdio.h>
#include <math.h>

int main()
{
    int alas = 5;
    int tinggi = 12;
    
    printf("diketahui\n");
    printf("Alas =  %d\n", alas);
    printf("Tinggi =  %d\n", tinggi);

    int sisi_miring = sqrt(pow(alas,2) + pow(tinggi,2));
    int keliling = alas + tinggi + sisi_miring;
    int luas =  alas * tinggi / 2;

    printf("jawab\n");
    printf("Sisi A %d\n", tinggi);
    printf("Sisi B %d\n", sisi_miring);
    printf("Sisi C %d\n", alas);
    printf("keliling %d\n", keliling);
    printf("luas %d", luas);
    return 0;
}