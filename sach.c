#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sach.h"

// Tao mot sach moi
Sach* taoSachE5(char tensach[], int soluong, char loai, int namxb) {
    Sach* s = (Sach*)malloc(sizeof(Sach));
    strcpy(s->tensach, tensach);
    s->soluong = soluong;
    s->loai = loai;
    s->namxb = namxb;
    s->next = NULL;
    return s;
}

// Chen vao dau danh sach
void chenDauE5(Sach** head, Sach* s) {
    s->next = *head;
    *head = s;
}

// Chen vao cuoi danh sach
void chenCuoiE5(Sach** head, Sach* s) {
    if (*head == NULL) {
        *head = s;
    } else {
        Sach* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = s;
    }
}

// Nhap danh sach n sach
void nhapDanhSachE5(Sach** head, int n) {
    for (int i = 0; i < n; i++) {
        char tensach[100];
        int soluong;
        char loai;
        int namxb;

        printf("\nNhap thong tin sach thu %d:\n", i + 1);
        printf("  Ten sach: "); fflush(stdin); gets(tensach);
        printf("  So luong: "); scanf("%d", &soluong);
        printf("  Loai sach (A/B/C): "); fflush(stdin); scanf("%c", &loai);
        printf("  Nam xuat ban: "); scanf("%d", &namxb);

        Sach* s = taoSachE5(tensach, soluong, loai, namxb);
        chenCuoiE5(head, s);
    }
}

// In danh sach sach
void inDanhSachE5(Sach* head) {
    printf("\n=== DANH SACH SACH ===\n");
    while (head != NULL) {
        printf("Ten: %s | So luong: %d | Loai: %c | Nam XB: %d\n",
               head->tensach, head->soluong, head->loai, head->namxb);
        head = head->next;
    }
}

// Xoa sach xuat ban nam 2010
void xoaSach2010E5(Sach** head) {
    while (*head != NULL && (*head)->namxb == 2010) {
        Sach* temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    Sach* prev = *head;
    if (prev == NULL) return;

    Sach* curr = prev->next;
    while (curr != NULL) {
        if (curr->namxb == 2010) {
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}

// Tinh tong so luong sach theo loai
void thongKeTheoLoaiE5(Sach* head) {
    int tongA = 0, tongB = 0, tongC = 0;

    while (head != NULL) {
        if (head->loai == 'A') tongA += head->soluong;
        else if (head->loai == 'B') tongB += head->soluong;
        else if (head->loai == 'C') tongC += head->soluong;

        head = head->next;
    }

    printf("\n=== TONG SO SACH THEO LOAI ===\n");
    printf("Loai A: %d\n", tongA);
    printf("Loai B: %d\n", tongB);
    printf("Loai C: %d\n", tongC);
}

// Sap xep theo so luong tang dan
void sapXepTheoSoLuongE5(Sach** head) {
    if (*head == NULL || (*head)->next == NULL) return;

    for (Sach* i = *head; i != NULL; i = i->next) {
        for (Sach* j = i->next; j != NULL; j = j->next) {
            if (i->soluong > j->soluong) {
                // Hoan doi toan bo du lieu
                Sach temp = *i;
                *i = *j;
                *j = temp;

                // Doi lai con tro next
                Sach* tmp = i->next;
                i->next = j->next;
                j->next = tmp;

                // Swap tung truong vi da swap struct toan bo
                char buf[100];
                strcpy(buf, i->tensach); strcpy(i->tensach, j->tensach); strcpy(j->tensach, buf);
                char tmpLoai = i->loai; i->loai = j->loai; j->loai = tmpLoai;
                int tmpNam = i->namxb; i->namxb = j->namxb; j->namxb = tmpNam;
                int tmpSL = i->soluong; i->soluong = j->soluong; j->soluong = tmpSL;
            }
        }
    }
}

// Giai phong bo nho
void giaiPhongE5(Sach* head) {
    while (head != NULL) {
        Sach* temp = head;
        head = head->next;
        free(temp);
    }
}
