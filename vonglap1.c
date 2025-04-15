#include <stdio.h>

int main() {
    int sum = 0, x;

    for (int i = 1; i <= 10; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &x);
        sum += x;
    }

    printf("Tong = %d\n", sum);
    return 0;
}

