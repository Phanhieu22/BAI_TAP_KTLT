#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fileUtils.h"

void nhapDanhSachF2(HangHoa ds[], int *n) {
    printf("Nhap so luong hang hoa: ");
    scanf("%d", n);
    getchar(); // Loai bo ky tu '\n'

    for (int i = 0; i < *n; i++) {
        printf("Nhap thong tin hang hoa thu %d:\n", i + 1);
        printf("Ten hang: ");
        fgets(ds[i].tenHang, sizeof(ds[i].tenHang), stdin);
        ds[i].tenHang[strcspn(ds[i].tenHang, "\n")] = 0; // Xoa '\n'
        printf("So luong: ");
        scanf("%d", &ds[i].soLuong);
        getchar();
        printf("Loai hang: ");
        fgets(ds[i].loaiHang, sizeof(ds[i].loaiHang), stdin);
        ds[i].loaiHang[strcspn(ds[i].loaiHang, "\n")] = 0;
    }
}

void xuatDanhSachRaFileF2(HangHoa ds[], int n, const char *fileName) {
    FILE *f = fopen(fileName, "w");
    if (!f) {
        printf("Khong mo duoc file!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(f, "Ten: %s, So luong: %d, Loai: %s\n", ds[i].tenHang, ds[i].soLuong, ds[i].loaiHang);
    }

    fclose(f);
}

int tinhTongSoLuongF2(HangHoa ds[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += ds[i].soLuong;
    }
    return tong;
}

void timKiemF2(HangHoa ds[], int n, const char *tenTim) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].tenHang, tenTim) == 0) {
            printf("Tim thay: %s - So luong: %d - Loai: %s\n", ds[i].tenHang, ds[i].soLuong, ds[i].loaiHang);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay ten hang %s\n", tenTim);
    }
}

void sapXepVaGhiNhiPhanF2(HangHoa ds[], int n, const char *fileName) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ds[i].tenHang, ds[j].tenHang) > 0) {
                HangHoa temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    FILE *f = fopen(fileName, "wb");
    if (!f) {
        printf("Khong mo duoc file nhi phan!\n");
        return;
    }

    fwrite(ds, sizeof(HangHoa), n, f);
    fclose(f);
}

