#ifndef SINH_VIEN_H
#define SINH_VIEN_H

typedef struct {
    char hoTen[50];
    float diemTin;
    float diemTriet;
    float diemTA;
    float diemTB;
} SinhVien;

float tinhDiemTB(SinhVien sv);

void nhapDanhSach(SinhVien *ds, int n);

void inDanhSach(SinhVien *ds, int n);

void inTiengAnhLonHon9(SinhVien *ds, int n);

void sapXepTheoDiemTB(SinhVien *ds, int n);

void inSinhVienGioi(SinhVien *ds, int n);


#endif
