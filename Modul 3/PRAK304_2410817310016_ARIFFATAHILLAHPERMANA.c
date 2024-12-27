#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    if (x == 0) {
        printf("Nol");
    } else if (x >= 1 && x <= 9) {
        printf("Satuan");
    } else if (x >= 11 && x <= 19) {
        printf("Belasan");
    } else if ((x >= 20 && x <= 99) || x == 10) {
        printf("Puluhan");
    } else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    
    return 0;
}