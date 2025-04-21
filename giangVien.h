#ifndef GIANG_VIEN_H
#define GIANG_VIEN_H

typedef struct GiangVien {
    char hoten[50];
    char hocvi[10];         // VD: "TS", "ThS", "CN"
    int sotiet;
    float dongia;
    struct GiangVien* next;
} GiangVien;

GiangVien* taoGiangVien(char hoten[], char hocvi[], int sotiet, float dongia);

void chenDau(GiangVien** head, GiangVien* gv);

void chenCuoi(GiangVien** head, GiangVien* gv);

void nhapDanhSachGiangVien(GiangVien** head, int n);

void inDanhSachGiangVien(GiangVien* head);

void timGiangVienThS(GiangVien* head);

float heSoHocVi(char* hocvi);

void tinhTienGiangDay(GiangVien* head);

void sapXepTheoSoTiet(GiangVien** head);

void giaiPhongDSGiangVien(GiangVien* head);




#endif
