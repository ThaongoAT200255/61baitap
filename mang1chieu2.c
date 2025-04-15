#include <stdio.h>

int main() {
    int arr[10];

    // Nhập mảng
    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In mảng theo chiều ngược lại
    printf("Mang in theo chieu dao nguoc la: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

