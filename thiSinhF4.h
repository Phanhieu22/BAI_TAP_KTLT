#ifndef THISINHF4_H
#define THISINHF4_H

#include <stdio.h>

typedef struct ThiSinh {
    char Hoten[50];
    float Toan, Ly, Hoa;
    struct ThiSinh *Next;
} ThiSinh;

ThiSinh* taoThiSinhF4(const char *ht, float toan, float ly, float hoa);

void themDauF4(ThiSinh **head, ThiSinh *ts);

void themCuoiF4(ThiSinh **head, ThiSinh *ts);

void nhapDanhSachF4(ThiSinh **head, int n);

void inDanhSachF4(ThiSinh *head);

void ghiNhiPhanF4(ThiSinh *head, const char *filename);

void ghiVanBanF4(ThiSinh *head, const char *filename);

void docNhiPhanF4(ThiSinh **head, const char *filename);

void docVanBanF4(ThiSinh **head, const char *filename);

void timToanMaxF4(ThiSinh *head);

void xoaLyMinF4(ThiSinh **head);

#endif

