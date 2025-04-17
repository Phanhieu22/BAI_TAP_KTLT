#ifndef THI_SINH_OLYMPIC
#define THI_SINH_OLYMPIC

typedef struct {
    char hoTen[50];
    float diem;
    int truong; // danh so tu 1 den n
} ThiSinhOlympic;

void nhapDanhSachThiSinh(ThiSinhOlympic *ds, int n);

void inDanhSachThiSinh(ThiSinhOlympic *ds, int n);

float tinhTongDiemTruong(ThiSinhOlympic *ds, int n, int k);

float tinhTongDiemTruong(ThiSinhOlympic *ds, int n, int k);

void sapXepTheoDiem(ThiSinhOlympic *ds, int n);

#endif
