#include <stdio.h>

int main() {
    int a[100], n;
    int *p;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    p = a;  // trỏ p đến đầu mảng

    int min = *p;
    int max = *p;

    for (int i = 1; i < n; i++) {
        if (*(p + i) < min) {
            min = *(p + i);
        }
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }

    printf("\nGia tri nho nhat trong mang: %d\n", min);
    printf("Gia tri lon nhat trong mang: %d\n", max);

    return 0;
}
