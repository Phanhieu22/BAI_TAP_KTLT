#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sinhvien.h"

// Ham tinh diem trung binh
float tinhDiemTB(SinhVien sv) {
    return (sv.diemTin + sv.diemTriet + sv.diemTA) / 3.0;
}

// Ham nhap danh sach sinh vien
void nhapDanhSach(SinhVien *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ho ten: ");
        fflush(stdin);
        gets(ds[i].hoTen);

        printf("Diem Tin: ");
        scanf("%f", &ds[i].diemTin);

        printf("Diem Triet: ");
        scanf("%f", &ds[i].diemTriet);

        printf("Diem Tieng Anh: ");
        scanf("%f", &ds[i].diemTA);

        ds[i].diemTB = tinhDiemTB(ds[i]);
    }
}

// Ham in danh sach theo bang
void inDanhSach(SinhVien *ds, int n) {
    printf("\n%-25s %-10s %-10s %-10s %-10s\n", "Ho Ten", "Tin", "Triet", "TA", "DiemTB");
    for (int i = 0; i < n; i++) {
        printf("%-25s %-10.2f %-10.2f %-10.2f %-10.2f\n",
            ds[i].hoTen, ds[i].diemTin, ds[i].diemTriet, ds[i].diemTA, ds[i].diemTB);
    }
}

// Ham in sinh vien co diem TA >= 9
void inTiengAnhLonHon9(SinhVien *ds, int n) {
    printf("\nDanh sach sinh vien co diem TA >= 9:\n");
    printf("%-25s %-10s %-10s %-10s %-10s\n", "Ho Ten", "Tin", "Triet", "TA", "DiemTB");
    for (int i = 0; i < n; i++) {
        if (ds[i].diemTA >= 9)
            printf("%-25s %-10.2f %-10.2f %-10.2f %-10.2f\n",
                ds[i].hoTen, ds[i].diemTin, ds[i].diemTriet, ds[i].diemTA, ds[i].diemTB);
    }
}

// Ham sap xep theo diem trung binh tang dan
void sapXepTheoDiemTB(SinhVien *ds, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (ds[i].diemTB > ds[j].diemTB) {
                SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
}

// Ham in sinh vien co diem TB >= 8
void inSinhVienGioi(SinhVien *ds, int n) {
    printf("\nDanh sach sinh vien co diem TB >= 8:\n");
    printf("%-25s %-10s %-10s %-10s %-10s\n", "Ho Ten", "Tin", "Triet", "TA", "DiemTB");
    for (int i = 0; i < n; i++) {
        if (ds[i].diemTB >= 8)
            printf("%-25s %-10.2f %-10.2f %-10.2f %-10.2f\n",
                ds[i].hoTen, ds[i].diemTin, ds[i].diemTriet, ds[i].diemTA, ds[i].diemTB);
    }
}
