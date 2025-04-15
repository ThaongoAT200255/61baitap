#include <stdio.h>

int main() {
    int m, n;
    printf("Nhap so dong m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);

    int a[m][n];

    // Nhập ma trận
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // In theo dạng xoắn ốc
    printf("\nCac phan tu in theo xoan oc:\n");

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // In hàng trên cùng từ trái sang phải
        for (int i = left; i <= right; i++) {
            printf("%d ", a[top][i]);
        }
        top++;

        // In cột phải từ trên xuống dưới
        for (int i = top; i <= bottom; i++) {
            printf("%d ", a[i][right]);
        }
        right--;

        // In hàng dưới từ phải sang trái
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", a[bottom][i]);
            }
            bottom--;
        }

        // In cột trái từ dưới lên trên
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", a[i][left]);
            }
            left++;
        }
    }

    return 0;
}

