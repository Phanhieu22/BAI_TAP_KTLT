#include <stdio.h>
#include "matranF8.h"

void docMaTranF8(const char *filename, int a[MAX][MAX], int *m, int *n) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        printf("Khong mo duoc file\n");
        return;
    }
    fscanf(f, "%d%d", m, n);
    for (int i = 0; i < *m; i++) {
        for (int j = 0; j < *n; j++) {
            fscanf(f, "%d", &a[i][j]);
        }
    }
    fclose(f);
}

void inMaTranF8(int a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void tichPhanTuLeF8(int a[MAX][MAX], int m, int n) {
    long long tich = 1;
    int coLe = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 != 0) {
                tich *= a[i][j];
                coLe = 1;
            }
        }
    }
    if (coLe)
        printf("Tich cac phan tu le: %lld\n", tich);
    else
        printf("Khong co phan tu le trong ma tran\n");
}

void timChanLonNhatF8(int a[MAX][MAX], int m, int n) {
    int maxChan = -1, hang = -1, cot = -1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0 && (maxChan == -1 || a[i][j] > maxChan)) {
                maxChan = a[i][j];
                hang = i;
                cot = j;
            }
        }
    }
    if (maxChan == -1)
        printf("Khong co phan tu chan trong ma tran\n");
    else
        printf("Phan tu chan lon nhat: %d o hang %d cot %d\n", maxChan, hang, cot);
}

void tongChiaHet7TrenHangF8(int a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        int tong = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 7 == 0) {
                tong += a[i][j];
            }
        }
        printf("Tong chia het 7 tren hang %d: %d\n", i, tong);
    }
}

