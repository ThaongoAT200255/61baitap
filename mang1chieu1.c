#include <stdio.h>

int main() {
    int arr[10];  // Khai báo mảng số nguyên có 10 phần tử

    // Nhập 10 phần tử từ bàn phím
    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In mảng ra màn hình theo hàng ngang
    printf("Mang vua nhap la: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
