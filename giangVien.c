#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "giangVien.h"

// Ham tao mot giang vien moi
GiangVien* taoGiangVien(char hoten[], char hocvi[], int sotiet, float dongia) {
    GiangVien* gv = (GiangVien*)malloc(sizeof(GiangVien));
    strcpy(gv->hoten, hoten);
    strcpy(gv->hocvi, hocvi);
    gv->sotiet = sotiet;
    gv->dongia = dongia;
    gv->next = NULL;
    return gv;
}

// Chen vao dau danh sach
void chenDau(GiangVien** head, GiangVien* gv) {
    gv->next = *head;
    *head = gv;
}

// Chen vao cuoi danh sach
void chenCuoi(GiangVien** head, GiangVien* gv) {
    if (*head == NULL) {
        *head = gv;
    } else {
        GiangVien* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = gv;
    }
}

// Nhap danh sach n giang vien
void nhapDanhSachGiangVien(GiangVien** head, int n) {
    for (int i = 0; i < n; i++) {
        char hoten[50];
        char hocvi[10];
        int sotiet;
        float dongia;

        printf("Nhap thong tin giang vien thu %d:\n", i + 1);
        printf("  Ho ten: "); fflush(stdin); gets(hoten);
        printf("  Hoc vi (TS/ThS/CN): "); fflush(stdin); gets(hocvi);
        printf("  So tiet day: "); scanf("%d", &sotiet);
        printf("  Don gia: "); scanf("%f", &dongia);

        GiangVien* gv = taoGiangVien(hoten, hocvi, sotiet, dongia);
        chenCuoi(head, gv);
    }
}

// In danh sach giang vien
void inDanhSachGiangVien(GiangVien* head) {
    printf("\n=== DANH SACH GIANG VIEN ===\n");
    while (head != NULL) {
        printf("Ho ten: %s | Hoc vi: %s | So tiet: %d | Don gia: %.2f\n",
               head->hoten, head->hocvi, head->sotiet, head->dongia);
        head = head->next;
    }
}

// Tim va in giang vien co hoc vi la "ThS"
void timGiangVienThS(GiangVien* head) {
    printf("\n=== GIANG VIEN CO HOC VI 'ThS' ===\n");
    while (head != NULL) {
        if (strcmp(head->hocvi, "ThS") == 0) {
            printf("Ho ten: %s | So tiet: %d | Don gia: %.2f\n",
                   head->hoten, head->sotiet, head->dongia);
        }
        head = head->next;
    }
}

// Tinh tien giang day
float heSoHocVi(char* hocvi) {
    if (strcmp(hocvi, "TS") == 0)
        return 1.5;
    if (strcmp(hocvi, "ThS") == 0)
        return 1.0;
    return 0.5;
}

void tinhTienGiangDay(GiangVien* head) {
    printf("\n=== TIEN GIANG DAY CUA MOI GIANG VIEN ===\n");
    while (head != NULL) {
        float heso = heSoHocVi(head->hocvi);
        float tien = head->sotiet * head->dongia * heso;
        printf("Ho ten: %s | Hoc vi: %s | Tien giang day: %.2f\n",
               head->hoten, head->hocvi, tien);
        head = head->next;
    }
}

// Sap xep danh sach theo so tiet day giam dan
void sapXepTheoSoTiet(GiangVien** head) {
    if (*head == NULL || (*head)->next == NULL) return;

    GiangVien *i, *j;
    for (i = *head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->sotiet < j->sotiet) {
                // Hoan doi thong tin
                GiangVien temp = *i;
                *i = *j;
                *j = temp;

                // Giu lai con tro next
                GiangVien* tempNext = i->next;
                i->next = j->next;
                j->next = tempNext;

                // Swap lai noi dung lai vi da copy toan bo struct
                char buf[50];
                strcpy(buf, i->hoten); strcpy(i->hoten, j->hoten); strcpy(j->hoten, buf);
                strcpy(buf, i->hocvi); strcpy(i->hocvi, j->hocvi); strcpy(j->hocvi, buf);
                int tempSoTiet = i->sotiet; i->sotiet = j->sotiet; j->sotiet = tempSoTiet;
                float tempDonGia = i->dongia; i->dongia = j->dongia; j->dongia = tempDonGia;
            }
        }
    }
}

// Ham giai phong bo nho
void giaiPhongDSGiangVien(GiangVien* head) {
    while (head != NULL) {
        GiangVien* temp = head;
        head = head->next;
        free(temp);
    }
}
