#include <stdio.h>
#include <stdlib.h>
#include "diem3dF5.h"

void nhapDanhSachDiemF5(Diem3D **ds, int *n) {
    printf("Nhap so diem: ");
    scanf("%d", n);
    *ds = (Diem3D *)malloc(*n * sizeof(Diem3D));
    for (int i = 0; i < *n; i++) {
        printf("Diem %d (x y z): ", i + 1);
        scanf("%f %f %f", &(*ds)[i].x, &(*ds)[i].y, &(*ds)[i].z);
    }
}

void xuatVanBanF5(Diem3D *ds, int n, const char *filename) {
    FILE *f = fopen(filename, "w");
    if (!f) return;
    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(f, "%.2f %.2f %.2f\n", ds[i].x, ds[i].y, ds[i].z);
    }
    fclose(f);
}

void nhapVanBanF5(Diem3D **ds, int *n, const char *filename) {
    FILE *f = fopen(filename, "r");
    if (!f) return;
    fscanf(f, "%d", n);
    *ds = (Diem3D *)malloc(*n * sizeof(Diem3D));
    for (int i = 0; i < *n; i++) {
        fscanf(f, "%f %f %f", &(*ds)[i].x, &(*ds)[i].y, &(*ds)[i].z);
    }
    fclose(f);
}

void xuatNhiPhanF5(Diem3D *ds, int n, const char *filename) {
    FILE *f = fopen(filename, "wb");
    if (!f) return;
    fwrite(&n, sizeof(int), 1, f);
    fwrite(ds, sizeof(Diem3D), n, f);
    fclose(f);
}

void nhapNhiPhanF5(Diem3D **ds, int *n, const char *filename) {
    FILE *f = fopen(filename, "rb");
    if (!f) return;
    fread(n, sizeof(int), 1, f);
    *ds = (Diem3D *)malloc(*n * sizeof(Diem3D));
    fread(*ds, sizeof(Diem3D), *n, f);
    fclose(f);
}

void giaiPhongF5(Diem3D **ds) {
    if (*ds != NULL) {
        free(*ds);
        *ds = NULL;
    }
}

