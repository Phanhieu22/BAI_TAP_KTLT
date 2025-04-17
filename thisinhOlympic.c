#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "thisinhOlympic.h"

// Ham nhap danh sach thi sinh
void nhapDanhSachThiSinh(ThiSinhOlympic *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin thi sinh thu %d:\n", i + 1);
        printf("Ho ten: ");
        fflush(stdin);
        gets(ds[i].hoTen);

        printf("Diem: ");
        scanf("%f", &ds[i].diem);

        printf("Ma truong (so nguyen tu 1 den n): ");
        scanf("%d", &ds[i].truong);
    }
}

// Ham in danh sach thi sinh
void inDanhSachThiSinh(ThiSinhOlympic *ds, int n) {
    printf("\n%-25s %-10s %-10s\n", "Ho Ten", "Diem", "Truong");
    for (int i = 0; i < n; i++) {
        printf("%-25s %-10.2f %-10d\n", ds[i].hoTen, ds[i].diem, ds[i].truong);
    }
}

// Ham tinh tong diem cho truong k
float tinhTongDiemTruong(ThiSinhOlympic *ds, int n, int k) {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        if (ds[i].truong == k)
            tong += ds[i].diem;
    }
    return tong;
}

// Ham sap xep danh sach theo diem giam dan
void sapXepTheoDiem(ThiSinhOlympic *ds, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (ds[i].diem < ds[j].diem) {
                ThiSinhOlympic temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
}

// Ham tim truong co tong diem cao nhat
int timTruongMaxDiem(ThiSinhOlympic *ds, int n, int soTruong) {
    float *tongDiem = (float *)calloc(soTruong + 1, sizeof(float)); // chi so tu 1

    for (int i = 0; i < n; i++) {
        int t = ds[i].truong;
        if (t >= 1 && t <= soTruong)
            tongDiem[t] += ds[i].diem;
    }

    float max = tongDiem[1];
    int truongMax = 1;
    for (int i = 2; i <= soTruong; i++) {
        if (tongDiem[i] > max) {
            max = tongDiem[i];
            truongMax = i;
        }
    }

    printf("\nTong diem moi truong:\n");
    for (int i = 1; i <= soTruong; i++) {
        printf("Truong %d: %.2f diem\n", i, tongDiem[i]);
    }

    free(tongDiem);
    return truongMax;
}

