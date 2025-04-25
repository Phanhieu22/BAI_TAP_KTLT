#ifndef FILE_UTILS
#define FILE_UTILS

#define MAX 100

typedef struct {
    char tenHang[100];
    int soLuong;
    char loaiHang[100];
} HangHoa;


void nhapDanhSachF2(HangHoa ds[], int *n);

void xuatDanhSachRaFileF2(HangHoa ds[], int n, const char *fileName);

int tinhTongSoLuongF2(HangHoa ds[], int n);

void timKiemF2(HangHoa ds[], int n, const char *tenTim);

void timKiemF2(HangHoa ds[], int n, const char *tenTim);

#endif
