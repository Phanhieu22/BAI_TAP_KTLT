#ifndef SACH_H
#define SACH_H

typedef struct Sach {
    char tensach[100];
    int soluong;
    char loai; // 'A', 'B', 'C'
    int namxb;
    struct Sach* next;
} Sach;

Sach* taoSachE5(char tensach[], int soluong, char loai, int namxb);


void chenDauE5(Sach** head, Sach* s);

void chenCuoiE5(Sach** head, Sach* s);


// Nhap danh sach n sach
void nhapDanhSachE5(Sach** head, int n);

void inDanhSachE5(Sach* head);

void xoaSach2010E5(Sach** head);

void thongKeTheoLoaiE5(Sach* head);

void sapXepTheoSoLuongE5(Sach** head);

void giaiPhongE5(Sach* head);

#endif
