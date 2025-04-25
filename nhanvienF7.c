#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nhanvienF7.h"

int docDanhSachF7(const char *filename, NhanVien **ds) {
    FILE *f = fopen(filename, "r");
    if (!f) return 0;

    int capacity = 10;
    *ds = (NhanVien *)malloc(capacity * sizeof(NhanVien));
    int n = 0;

    while (!feof(f)) {
        if (n >= capacity) {
            capacity *= 2;
            *ds = (NhanVien *)realloc(*ds, capacity * sizeof(NhanVien));
        }

        NhanVien nv;
        char line[256];

        if (!fgets(line, sizeof(line), f)) break;
        nv.ma = atoi(line);

        if (!fgets(line, sizeof(line), f)) break;
        line[strcspn(line, "\n")] = 0;
        int len = strlen(line);
        nv.phong = line[len - 1];
        line[len - 2] = '\0';
        strcpy(nv.hoten, line);

        if (!fgets(line, sizeof(line), f)) break;
        nv.luong = atoi(line);

        (*ds)[n++] = nv;
    }

    fclose(f);
    return n;
}

void inDanhSachF7(FILE *out, NhanVien *ds, int n) {
    fprintf(out, "DANH SACH NHAN VIEN:\n");
    for (int i = 0; i < n; i++) {
        fprintf(out, "%d - %s (Phong %c) - Luong: %d\n", ds[i].ma, ds[i].hoten, ds[i].phong, ds[i].luong);
    }
}

void demTheoPhongF7(FILE *out, NhanVien *ds, int n) {
    int demA = 0, demB = 0, demC = 0;
    for (int i = 0; i < n; i++) {
        if (ds[i].phong == 'A') demA++;
        else if (ds[i].phong == 'B') demB++;
        else if (ds[i].phong == 'C') demC++;
    }
    fprintf(out, "\nSO NHAN VIEN THEO PHONG:\n");
    fprintf(out, "Phong A: %d\n", demA);
    fprintf(out, "Phong B: %d\n", demB);
    fprintf(out, "Phong C: %d\n", demC);
}

void inNhanVienLuongCaoNhatF7(FILE *out, NhanVien *ds, int n) {
    int max = ds[0].luong;
    for (int i = 1; i < n; i++) {
        if (ds[i].luong > max) max = ds[i].luong;
    }

    fprintf(out, "\nNHAN VIEN CO LUONG CAO NHAT:\n");
    for (int i = 0; i < n; i++) {
        if (ds[i].luong == max) {
            fprintf(out, "%d - %s (Phong %c) - Luong: %d\n", ds[i].ma, ds[i].hoten, ds[i].phong, ds[i].luong);
        }
    }
}

