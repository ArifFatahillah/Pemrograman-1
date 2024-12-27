#include <stdio.h>

int main() {
    int batas_maksimal;
    scanf("%d", &batas_maksimal);
    for (int i = 1; i <= batas_maksimal; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = batas_maksimal; i >= 2; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}