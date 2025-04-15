#include <stdio.h>

int main() {
    int a[10];
    int *p;

    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    p = a;
    printf("\nMang vua nhap la:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    return 0;
}
