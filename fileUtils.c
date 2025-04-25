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

void nhapTuBanPhimF3(float ***mat, int *n, int *m) {
    printf("Nhap so dong (n): ");
    scanf("%d", n);
    printf("Nhap so cot (m): ");
    scanf("%d", m);

    *mat = (float **)malloc((*n) * sizeof(float *));
    for (int i = 0; i < *n; i++) {
        (*mat)[i] = (float *)malloc((*m) * sizeof(float));
        for (int j = 0; j < *m; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%f", &(*mat)[i][j]);
        }
    }
}

void nhapTuFileVanBanF3(const char *filename, float ***mat, int *n, int *m) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        perror("Khong mo duoc file");
        return;
    }
    fscanf(f, "%d %d", n, m);

    *mat = (float **)malloc((*n) * sizeof(float *));
    for (int i = 0; i < *n; i++) {
        (*mat)[i] = (float *)malloc((*m) * sizeof(float));
        for (int j = 0; j < *m; j++) {
            fscanf(f, "%f", &(*mat)[i][j]);
        }
    }
    fclose(f);
}

void xuatRaFileVanBanF3(const char *filename, float **mat, int n, int m) {
    FILE *f = fopen(filename, "w");
    if (!f) {
        perror("Khong mo duoc file de ghi");
        return;
    }
    fprintf(f, "%d %d\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fprintf(f, "%.2f ", mat[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
}

void ghiFileNhiPhanF3(const char *filename, float **mat, int n, int m) {
    FILE *f = fopen(filename, "wb");
    if (!f) {
        perror("Khong mo duoc file nhi phan de ghi");
        return;
    }
    fwrite(&n, sizeof(int), 1, f);
    fwrite(&m, sizeof(int), 1, f);
    for (int i = 0; i < n; i++) {
        fwrite(mat[i], sizeof(float), m, f);
    }
    fclose(f);
}

void docFileNhiPhanF3(const char *filename, float ***mat, int *n, int *m) {
    FILE *f = fopen(filename, "rb");
    if (!f) {
        perror("Khong mo duoc file nhi phan");
        return;
    }
    fread(n, sizeof(int), 1, f);
    fread(m, sizeof(int), 1, f);

    *mat = (float **)malloc((*n) * sizeof(float *));
    for (int i = 0; i < *n; i++) {
        (*mat)[i] = (float *)malloc((*m) * sizeof(float));
        fread((*mat)[i], sizeof(float), *m, f);
    }
    fclose(f);
}

void inMaTranF3(float **mat, int n, int m) {
    printf("Ma tran %dx%d:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
}


void giaiPhongF3(float **mat, int n) {
    for (int i = 0; i < n; i++) {
        free(mat[i]);
    }
    free(mat);
}

