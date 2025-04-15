#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    int tong = 0, tongDuong = 0, tongAm = 0;
    int demDuong = 0, demAm = 0;

    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);

        tong += arr[i];
        if (arr[i] > 0) {
            tongDuong += arr[i];
            demDuong++;
        } else if (arr[i] < 0) {
            tongAm += arr[i];
            demAm++;
        }
    }

    float tbc = (float)tong / n;
    float tbcDuong = demDuong > 0 ? (float)tongDuong / demDuong : 0;
    float tbcAm = demAm > 0 ? (float)tongAm / demAm : 0;

    printf("\nTong tat ca cac so: %d", tong);
    printf("\nTong cac so duong: %d", tongDuong);
    printf("\nTong cac so am: %d", tongAm);
    printf("\nTrung binh cong tat ca: %.2f", tbc

