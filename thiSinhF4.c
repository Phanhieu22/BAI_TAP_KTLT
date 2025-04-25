#include "thiSinhF4.h"

ThiSinh* taoThiSinhF4(const char *ht, float toan, float ly, float hoa) {
    ThiSinh *ts = (ThiSinh *)malloc(sizeof(ThiSinh));
    strcpy(ts->Hoten, ht);
    ts->Toan = toan;
    ts->Ly = ly;
    ts->Hoa = hoa;
    ts->Next = NULL;
    return ts;
}

void themDauF4(ThiSinh **head, ThiSinh *ts) {
    ts->Next = *head;
    *head = ts;
}

void themCuoiF4(ThiSinh **head, ThiSinh *ts) {
    if (*head == NULL) {
        *head = ts;
    } else {
        ThiSinh *p = *head;
        while (p->Next != NULL)
            p = p->Next;
        p->Next = ts;
    }
}


void nhapDanhSachF4(ThiSinh **head, int n) {
    for (int i = 0; i < n; i++) {
        char ht[50];
        float t, l, h;
        printf("Nhap ten: "); fflush(stdin); gets(ht);
        printf("Toan: "); scanf("%f", &t);
        printf("Ly: "); scanf("%f", &l);
        printf("Hoa: "); scanf("%f", &h);
        ThiSinh *ts = taoThiSinhF4(ht, t, l, h);
        themCuoiF4(head, ts);
    }
}

void inDanhSachF4(ThiSinh *head) {
    ThiSinh *p = head;
    while (p != NULL) {
        printf("Ho ten: %s | Toan: %.2f | Ly: %.2f | Hoa: %.2f\n", p->Hoten, p->Toan, p->Ly, p->Hoa);
        p = p->Next;
    }
}

void ghiNhiPhanF4(ThiSinh *head, const char *filename) {
    FILE *f = fopen(filename, "wb");
    ThiSinh *p = head;
    while (p) {
        fwrite(p, sizeof(ThiSinh) - sizeof(ThiSinh *), 1, f);
        p = p->Next;
    }
    fclose(f);
}

void ghiVanBanF4(ThiSinh *head, const char *filename) {
    FILE *f = fopen(filename, "w");
    ThiSinh *p = head;
    while (p) {
        fprintf(f, "%s %.2f %.2f %.2f\n", p->Hoten, p->Toan, p->Ly, p->Hoa);
        p = p->Next;
    }
    fclose(f);
}

void docNhiPhanF4(ThiSinh **head, const char *filename) {
    FILE *f = fopen(filename, "rb");
    if (!f) return;
    ThiSinh temp;
    while (fread(&temp, sizeof(ThiSinh) - sizeof(ThiSinh *), 1, f)) {
        ThiSinh *ts = taoThiSinhF4(temp.Hoten, temp.Toan, temp.Ly, temp.Hoa);
        themCuoiF4(head, ts);
    }
    fclose(f);
}

void docVanBanF4(ThiSinh **head, const char *filename) {
    FILE *f = fopen(filename, "r");
    if (!f) return;
    char ht[50];
    float t, l, h;
    while (fscanf(f, "%s %f %f %f", ht, &t, &l, &h) == 4) {
        ThiSinh *ts = taoThiSinhF4(ht, t, l, h);
        themCuoiF4(head, ts);
    }
    fclose(f);
}

void timToanMaxF4(ThiSinh *head) {
    if (!head) return;
    float max = head->Toan;
    ThiSinh *p = head->Next;
    while (p) {
        if (p->Toan > max)
            max = p->Toan;
        p = p->Next;
    }

    printf("Thi sinh co diem toan cao nhat (%.2f):\n", max);
    p = head;
    while (p) {
        if (p->Toan == max)
            printf("%s %.2f %.2f %.2f\n", p->Hoten, p->Toan, p->Ly, p->Hoa);
        p = p->Next;
    }
}

void xoaLyMinF4(ThiSinh **head) {
    if (!*head) return;
    float min = (*head)->Ly;
    ThiSinh *p = (*head)->Next;
    while (p) {
        if (p->Ly < min)
            min = p->Ly;
        p = p->Next;
    }

    ThiSinh *curr = *head, *prev = NULL;
    while (curr) {
        if (curr->Ly == min) {
            ThiSinh *temp = curr;
            if (prev == NULL) {
                *head = curr->Next;
                curr = *head;
            } else {
                prev->Next = curr->Next;
                curr = curr->Next;
            }
            free(temp);
        } else {
            prev = curr;
            curr = curr->Next;
        }
    }
}








