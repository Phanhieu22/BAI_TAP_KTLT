#include <stdio.h>
#include <stdlib.h>
#include "danhSachLienket.h"
// Ham menu tra ve lua chon cua nguoi dung
int Menu() {
    int chon;
    printf("\n----- MENU -----\n");
    printf("1. Nhap day\n");
    printf("2. Xuat day\n");
    printf("3. Tim max duong\n");
    printf("4. Kiem tra tinh Fibonacci\n");
    printf("5. Thoat\n");
    printf("Nhap lua chon: ");
    scanf("%d", &chon);
    return chon;
}

// Ham nhap day so thuc
int Nhap(float **a) {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0) {
        *a = NULL;
        return 0;
    }
    *a = (float *)malloc((n + 1) * sizeof(float)); // cap phat n + 1
    if (*a == NULL) {
        printf("Khong du bo nho!\n");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &(*a)[i]);
    }
    return n;
}

// Ham tim max trong cac phan tu duong
int MaxDuong(int n, float *a, float *max) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (!found || a[i] > *max) {
                *max = a[i];
                found = 1;
            }
        }
    }
    return found;
}

// Ham kiem tra tinh Fibonacci
int Fibo(int n, float *a) {
    if (n < 3) return 0;
    for (int i = 2; i < n; i++) {
        if (a[i] != a[i - 1] + a[i - 2])
            return 0;
    }
    return 1;
}

// Ham xuat day
void Xuat(int n, float *a) {
    if (n <= 0 || a == NULL) {
        printf("Day rong!\n");
        return;
    }
    printf("Day so: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}
