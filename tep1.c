#include <stdio.h>
#include <stdlib.h>

struct BanHang {
    char tenHang[30];
    int donGia;
    int soLuong;
    int thanhTien;
};

int main() {
    struct BanHang ds[100];
    int n;

    FILE *f;


    printf("Nhap so mat hang: ");
    scanf("%d", &n);


    f = fopen("SO_LIEU.C", "w");
    if (f == NULL) {
        printf("Khong mo duoc tep!\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("\nMat hang %d:\n", i + 1);
        printf("Ten hang: ");
        scanf(" %[^\n]", ds[i].tenHang);
        printf("Don gia: ");
        scanf("%d", &ds[i].donGia);
        printf("So luong: ");
        scanf("%d", &ds[i].soLuong);

        ds[i].thanhTien = ds[i].donGia * ds[i].soLuong;

        fprintf(f, "%s %d %d %d\n", ds[i].tenHang, ds[i].donGia, ds[i].soLuong, ds[i].thanhTien);
    }

    fclose(f);


    f = fopen("SO_LIEU.C", "r");
    if (f == NULL) {
        printf("Khong mo duoc tep de doc!\n");
        return 1;
    }

    printf("\n%-5s %-15s %-10s %-10s %-10s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");

    int i = 0;
    while (fscanf(f, "%s %d %d %d", ds[i].tenHang, &ds[i].donGia, &ds[i].soLuong, &ds[i].thanhTien) != EOF) {
        printf("%-5d %-15s %-10d %-10d %-10d\n", i + 1, ds[i].tenHang, ds[i].donGia, ds[i].soLuong, ds[i].thanhTien);
        i++;
    }

    fclose(f);

    return 0;
}
