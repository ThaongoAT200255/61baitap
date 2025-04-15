#include <stdio.h>

void sapXepTangDan(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(a + i) > *(a + j)) {
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}

int main() {
    int a[100], n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Gọi hàm sắp xếp
    sapXepTangDan(a, n);

    // In kết quả
    printf("\nMang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }

    printf("\n");
    return 0;
}
