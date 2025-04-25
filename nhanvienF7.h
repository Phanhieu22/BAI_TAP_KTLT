#ifndef NHANVIENF7_H
#define NHANVIENF7_H

typedef struct {
    int ma;
    char hoten[100];
    char phong;
    int luong;
} NhanVien;

int docDanhSachF7(const char *filename, NhanVien **ds);
void inDanhSachF7(FILE *out, NhanVien *ds, int n);
void demTheoPhongF7(FILE *out, NhanVien *ds, int n);
void inNhanVienLuongCaoNhatF7(FILE *out, NhanVien *ds, int n);

#endif

