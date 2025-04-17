#include <stdio.h>
#include <stdlib.h>
#include "array.h"

// Ham nhap mang
void nhapMang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", a + i); // su dung con tro
    }
}

// Ham in mang tren mot hang
void inMang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
}

// Ham tim phan tu lon nhat trong mang
int timMax(int *a, int n) {
    int max = *a;
    for (int i = 1; i < n; i++) {
        if (*(a + i) > max)
            max = *(a + i);
    }
    return max;
}

// Ham sap xep mang tang dan
void sapXepTangDan(int *a, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (*(a + i) > *(a + j)) {
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
}

// Ham tim vi tri cua mot phan tu x
int timPhanTu(int *a, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) == x)
            return i; // tra ve vi tri dau tien tim thay
    }
    return -1; // khong tim thay
}

// Ham nhap ma tran
void nhapMaTran(int **a, int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

// Ham in ma tran theo dang bang
void inMaTran(int **a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}

// Ham tim phan tu lon nhat trong ma tran
int timMaxTrongMaTran(int **a, int n, int m) {
    int max = a[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] > max)
                max = a[i][j];
    return max;
}

// Ham tinh tong duong cheo chinh (chi ap dung neu n == m)
int tongCheoChinh(int **a, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++)
        tong += a[i][i];
    return tong;
}

// Ham tim max cua tung hang
void timMaxMoiHang(int **a, int n, int m) {
    for (int i = 0; i < n; i++) {
        int max = a[i][0];
        for (int j = 1; j < m; j++)
            if (a[i][j] > max)
                max = a[i][j];
        printf("Max cua hang %d: %d\n", i, max);
    }
}

// Ham tinh tong cac phan tu khong am tren moi cot
void tongKhongAmMoiCot(int **a, int n, int m) {
    for (int j = 0; j < m; j++) {
        int tong = 0;
        for (int i = 0; i < n; i++)
            if (a[i][j] >= 0)
                tong += a[i][j];
        printf("Tong khong am cot %d: %d\n", j, tong);
    }
}

// In phan tam giac tren (chi ap dung khi n == m)
void inTamGiacTren(int **a, int n) {
    printf("Phan tam giac tren:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i)
                printf("%5d", a[i][j]);
            else
                printf("     ");
        }
        printf("\n");
    }
}

// In phan tam giac duoi (chi ap dung khi n == m)
void inTamGiacDuoi(int **a, int n) {
    printf("Phan tam giac duoi:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i)
                printf("%5d", a[i][j]);
            else
                printf("     ");
        }
        printf("\n");
    }
}
