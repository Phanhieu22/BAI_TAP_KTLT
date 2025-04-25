#ifndef DIEM3DF5_H
#define DIEM3DF5_H

#include <stdio.h>

typedef struct {
    float x, y, z;
} Diem3D;

void nhapDanhSachDiemF5(Diem3D **ds, int *n);
void xuatVanBanF5(Diem3D *ds, int n, const char *filename);
void nhapVanBanF5(Diem3D **ds, int *n, const char *filename);
void xuatNhiPhanF5(Diem3D *ds, int n, const char *filename);
void nhapNhiPhanF5(Diem3D **ds, int *n, const char *filename);
void giaiPhongF5(Diem3D **ds);

#endif

