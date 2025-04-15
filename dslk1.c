#include <stdio.h>
#include <string.h>

struct MatHang {
    char tenHang[50];
    int donGia;
    int soLuong;
    int thanhTien;
};

void sapXepTheoTen(struct MatHang a[], int n) {
    struct MatHang temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(a[i].tenHang, a[j].tenHang) > 0) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);

    struct MatHang ds[100];


    for (int i = 0; i < n; i++) {
        printf("\nMat hang thu %d:\n", i + 1);
        printf("Ten hang: ");
        fflush(stdin);
        gets(ds[i].tenHang);
        printf("Don gia: ");
        scanf("%d", &ds[i].donGia);
        printf("So luong: ");
        scanf("%d", &ds[i].soLuong);

        ds[i].thanhTien = ds[i].donGia * ds[i].soLuong;
    }


    sapXepTheoTen(ds, n);


    int tongTien = 0;
    printf("\n%-5s %-15s %-10s %-10s %-12s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-10d %-10d %-12d\n", i + 1, ds[i].tenHang, ds[i].donGia, ds[i].soLuong, ds[i].thanhTien);
        tongTien += ds[i].thanhTien;
    }

    printf("%40s %-12d\n", "Tong tien", tongTien);

    return 0;
}
