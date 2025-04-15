#include <stdio.h>

int main() {

    printf("Truong hop 1: Mang khai bao san\n");
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }


    printf("\nTruong hop 2: Nhap mang tu ban phim\n");
    int matrix2[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Nhap phan tu tai dong %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Mang ban vua nhap:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
