#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien {
    char hoTen[50];
    int tuoi;
    float diemTB;
};

int main() {
    struct SinhVien ds[100];
    int n;

    FILE *f;

    // Nhập số lượng sinh viên
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    // Nhập và ghi vào file
    f = fopen("DSACH.C", "w");
    if (f == NULL) {
        printf("Khong mo duoc tep de ghi!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        printf("Ho ten: ");
        scanf(" %[^\n]", ds[i].hoTen);  // Nhập chuỗi có khoảng trắng
        printf("Tuoi: ");
        scanf("%d", &ds[i].tuoi);
        printf("Diem TB: ");
        scanf("%f", &ds[i].diemTB);

        fprintf(f, "%s %d %.2f\n", ds[i].hoTen, ds[i].tuoi, ds[i].diemTB);
    }

    fclose(f);

    // Đọc và hiển thị danh sách từ tệp
    f = fopen("DSACH.C", "r");
    if (f == NULL) {
        printf("Khong mo duoc tep de doc!\n");
        return 1;
    }

    printf("\n%-5s %-25s %-10s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");

    int i = 0;
    while (fscanf(f, "%s %d %f", ds[i].hoTen, &ds[i].tuoi, &ds[i].diemTB) != EOF) {
        printf("%-5d %-25s %-10d %-10.2f\n", i + 1, ds[i].hoTen, ds[i].tuoi, ds[i].diemTB);
        i++;
    }

    int soLuong = i;
    fclose(f);

    // Tìm và sửa sinh viên
    char tenCanTim[50];
    int timThay = 0;

    printf("\nNhap ho ten sinh vien muon sua: ");
    scanf(" %[^\n]", tenCanTim);

    for (i = 0; i < soLuong; i++) {
        if (strcmp(ds[i].hoTen, tenCanTim) == 0) {
            printf("Nhap tuoi moi: ");
            scanf("%d", &ds[i].tuoi);
            printf("Nhap diem TB moi: ");
            scanf("%f", &ds[i].diemTB);
            timThay = 1;
            break;
        }
    }

    if (!timThay) {
        printf("Khong tim thay sinh vien co ten '%s'\n", tenCanTim);
    } else {
        // Ghi lại toàn bộ danh sách sau khi sửa
        f = fopen("DSACH.C", "w");
        for (i = 0; i < soLuong; i++) {
            fprintf(f, "%s %d %.2f\n", ds[i].hoTen, ds[i].tuoi, ds[i].diemTB);
        }
        fclose(f);
        printf("Da cap nhat thong tin sinh vien.\n");
    }

    return 0;
}
