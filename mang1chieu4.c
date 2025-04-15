#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    int demChan = 0, demLe = 0;

    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            demChan++;
        else
            demLe++;
    }

    printf("\nSo luong so chan: %d", demChan);
    printf("\nSo luong so le: %d\n", demLe);

    return 0;
}
