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

void nhapTuBanPhimF3(float ***mat, int *n, int *m);

void nhapTuFileVanBanF3(const char *filename, float ***mat, int *n, int *m);

void xuatRaFileVanBanF3(const char *filename, float **mat, int n, int m);

void ghiFileNhiPhanF3(const char *filename, float **mat, int n, int m);

void docFileNhiPhanF3(const char *filename, float ***mat, int *n, int *m);

void inMaTranF3(float **mat, int n, int m);

void giaiPhongF3(float **mat, int n);

#endif
