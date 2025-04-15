
#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);

    printf("Tong: %d + %d = %d\n", a, b, a + b);
    printf("Hieu: %d - %d = %d\n", a, b, a - b);
    printf("Tich: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Thuong: %d / %d = %d\n", a, b, a / b);
        printf("Phan du: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Khong the chia cho 0!\n");
    }

    return 0;
}
