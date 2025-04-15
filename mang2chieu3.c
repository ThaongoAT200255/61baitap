#include <stdio.h>

int main() {
    int m, n, p;

    // Nhập kích thước ma trận
    printf("Nhap so dong cua ma tran A (m): ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran A (va dong cua ma tran B) (n): ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran B (p): ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];

    // Nhập ma trận A
    printf("\nNhap ma tran A (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Nhập ma trận B
    printf("\nNhap ma tran B (%dx%d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Tính tích C = A x B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // In ma trận tích C
    printf("\nMa tran tich C = A x B la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
