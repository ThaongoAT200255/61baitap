#include <stdio.h>

void hoanDoi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri b: ");
    scanf("%d", &b);

    printf("\nTruoc khi hoan doi: a = %d, b = %d\n", a, b);

    hoanDoi(&a, &b);

    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);

    return 0;
}
