#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Khai báo struct SinhVien và node danh sách liên kết
typedef struct SinhVien {
    char hoTen[50];
    int tuoi;
    float diemTB;
    struct SinhVien *next;
} SinhVien;

// Hàm tạo sinh viên mới
SinhVien* taoSinhVien(char hoTen[], int tuoi, float diemTB) {
    SinhVien *sv = (SinhVien*)malloc(sizeof(SinhVien));
    strcpy(sv->hoTen, hoTen);
    sv->tuoi = tuoi;
    sv->diemTB = diemTB;
    sv->next = NULL;
    return sv;
}

// Hàm in danh sách sinh viên
void inDanhSach(SinhVien *head) {
    int stt = 1;
    printf("\n%-5s %-20s %-10s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    while (head != NULL) {
        printf("%-5d %-20s %-10d %-10.2f\n", stt++, head->hoTen, head->tuoi, head->diemTB);
        head = head->next;
    }
}

// Hàm chèn sinh viên vào trước người có tên cụ thể
void chenTruoc(SinhVien **head, char tenCanTim[], SinhVien *svMoi) {
    // Trường hợp đặc biệt: chèn vào đầu danh sách
    if (*head == NULL || strcmp((*head)->hoTen, tenCanTim) == 0) {
        svMoi->next = *head;
        *head = svMoi;
        return;
    }

    SinhVien *prev = *head;
    SinhVien *curr = (*head)->next;

    while (curr != NULL && strcmp(curr->hoTen, tenCanTim) != 0) {
        prev = curr;
        curr = curr->next;
    }

    if (curr != NULL) {
        prev->next = svMoi;
        svMoi->next = curr;
    } else {
        printf("Khong tim thay sinh vien ten '%s' de chen truoc!\n", tenCanTim);
    }
}

// Hàm xóa sinh viên có tên cụ thể
void xoaSinhVien(SinhVien **head, char tenCanXoa[]) {
    SinhVien *curr = *head;
    SinhVien *prev = NULL;

    while (curr != NULL && strcmp(curr->hoTen, tenCanXoa) != 0) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) {
        printf("Khong tim thay sinh vien ten '%s' de xoa!\n", tenCanXoa);
        return;
    }

    if (prev == NULL) {
        *head = curr->next;
    } else {
        prev->next = curr->next;
    }

    free(curr);
    printf("Da xoa sinh vien '%s'.\n", tenCanXoa);
}

int main() {
    SinhVien *danhSach = NULL;
    int chon;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Them sinh vien vao cuoi danh sach\n");
        printf("2. In danh sach sinh vien\n");
        printf("3. Chen sinh vien truoc ten cu the\n");
        printf("4. Xoa sinh vien co ten cu the\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &chon);
        getchar(); // Xoá \n sau scanf

        if (chon == 1) {
            char hoTen[50];
            int tuoi;
            float diemTB;

            printf("Nhap ho ten: ");
            fgets(hoTen, sizeof(hoTen), stdin);
            hoTen[strcspn(hoTen, "\n")] = '\0';

            printf("Nhap tuoi: ");
            scanf("%d", &tuoi);

            printf("Nhap diem TB: ");
            scanf("%f", &diemTB);

            SinhVien *svMoi = taoSinhVien(hoTen, tuoi, diemTB);

            // Thêm vào cuối danh sách
            if (danhSach == NULL) {
                danhSach = svMoi;
            } else {
                SinhVien *tmp = danhSach;
                while (tmp->next != NULL) tmp = tmp->next;
                tmp->next = svMoi;
            }
        }

        else if (chon == 2) {
            inDanhSach(danhSach);
        }

        else if (chon == 3) {
            char hoTen[50], tenChen[50];
            int tuoi;
            float diemTB;

            printf("Nhap ho ten sinh vien moi: ");
            fgets(hoTen, sizeof(hoTen), stdin);
            hoTen[strcspn(hoTen, "\n")] = '\0';

            printf("Nhap tuoi: ");
            scanf("%d", &tuoi);

            printf("Nhap diem TB: ");
            scanf("%f", &diemTB);
            getchar();

            printf("Nhap ten sinh vien muon chen truoc: ");
            fgets(tenChen, sizeof(tenChen), stdin);
            tenChen[strcspn(tenChen, "\n")] = '\0';

            SinhVien *svMoi = taoSinhVien(hoTen, tuoi, diemTB);
            chenTruoc(&danhSach, tenChen, svMoi);
        }

        else if (chon == 4) {
            char tenXoa[50];
            printf("Nhap ten sinh vien muon xoa: ");
            fgets(tenXoa, sizeof(tenXoa), stdin);
            tenXoa[strcspn(tenXoa, "\n")] = '\0';

            xoaSinhVien(&danhSach, tenXoa);
        }

    } while (chon != 0);

    return 0;
}
