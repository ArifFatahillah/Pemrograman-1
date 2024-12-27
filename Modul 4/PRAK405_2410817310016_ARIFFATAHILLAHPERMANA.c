#include <stdio.h>

int main() {
    int n, kelipatan;
    int total = 0; 
    scanf("%d %d", &n, &kelipatan);
    for (int i = 1; i <= n; i++) {
        int jumlah_kelipatan = 0; 
        for (int j = 1; j <= i; j++) {
            jumlah_kelipatan += j * kelipatan;
            if (j > 1) {
                printf(" + ");
            }
            printf("(%d * %d)", j, kelipatan); 
        }
        printf(" = %d\n", jumlah_kelipatan); 
        total += jumlah_kelipatan; 
    }
    printf("%d\n", total);

    return 0;
}