#include <stdio.h>
#include <math.h>
#include "helloWorld.h"
#include "polynomial.h"
#include "number.h"
#include "circle.h"
#include "array.h"
#include "sinhvien.h"
#include "thisinhOlympic.h"
#include "giangVien.h"
#include "sach.h"
#include <direct.h>
#include "fileUtils.h"
#include "thiSinhF4.h"
/* BAI TAP A.1 */
/*
int main(){
	printf("----- Bai tap A.1 -----\n");
    float radius;
    Point point1, point2;
    int n;
    
// Viet ham tinh dien tich va chu vi hinh tron
    printf("Nhap ban kinh hinh tron: ");
    radius = nhapBanKinh();
    printf("Chu vi hinh tron: %.2f\n", chuViHinhTron(radius));
    printf("Dien tich hinh tron: %.2f\n", dienTichHinhTron(radius));

// Viet ham kiem tra co phai la so nguyen to hay khong
    printf("Nhap so nguyen de kiem tra: ");
    n = nhapFloatHopLe("n");
    if (laSoNguyenTo(n))
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai la so nguyen to.\n", n);

// Ham tinh khoang cach hai diem trong khong gian 3 chieu
    printf("Trong khong gian 3D xin moi ban nhap toa do diem 1:\n");
    point1 = nhapToaDoDiem();
    
    printf("Trong khong gian 3D xin moi ban nhap toa do diem 2:\n");
    point2 = nhapToaDoDiem();
    printf("Khoang cach giua 2 diem: %.2f\n", tinhKhoangCachTrongKhongGian3D(point1, point2));

// Ham tinh X^n su dung thuat toan de quy
    printf("Nhap n de tinh X^n: \n");
    n = nhapFloatHopLe("n");
    printf("X^%d = %.0f\n", n, tinhXn(n));

    return 0;
}
*/

/* BAI TAP A.2 */
/*
 int main(){
 	printf("----- Bai tap A.2 -----\n");
    Polynomial p1, p2, sum;
    float x1, x2 ,R;
	
	
	 // Kh?i t?o m?ng coef
    for (int i = 0; i <= MAX_DEGREE; i++){
    	p1.coef[i] = 0;
    	p2.coef[i] = 0;
	}
       
        
    printf("Nhap da thuc thu nhat:\n");
    p1 = nhapDaThuc(p1);

    printf("Nhap da thuc thu hai:\n");
    p2 = nhapDaThuc(p2);

    printf("\nDa thuc 1: ");
    inDaThuc(p1);

    printf("Da thuc 2: ");
    inDaThuc(p2);

    sum = tongDaThuc(p1, p2);
    printf("Tong 2 da thuc: ");
    inDaThuc(sum);

	x1 = nhapFloatHopLe("Nhap gia tri x1 de tinh gia tri da thuc a P(x1) = ");
	x2 = nhapFloatHopLe("Nhap gia tri x2 de tinh gia tri da thuc a Q(x2) = ");
	
	R = tinhGiaTri(p1, x1) + tinhGiaTri(p2, x2);
	
	printf("KET QUA: R = P(x1) + Q(x2) = %f" , R);
    return 0;
 }
 */
 
// int main() {
// 	printf("----- Bai tap B.1 -----\n");
//    int x, y, z;
//    printf("Nhap x: ");
//    scanf("%d", &x);
//    printf("Nhap y: ");
//    scanf("%d", &y);
//    printf("Nhap z: ");
//    scanf("%d", &z);
//
//    printf("\nGia tri va dia chi cua cac bien la : \n");
//    printf("x = %d, dia chi = %p\n", x, (void*)&x);
//    printf("y = %d, dia chi = %p\n", y, (void*)&y);
//    printf("z = %d, dia chi = %p\n", z, (void*)&z);
//}


//int main (){
//	printf("----- Bai tap B.2 -----\n");
//    int a, b, c;
//	int *ptr;
//    printf("Nhap a: ");
//    scanf("%d", &a);
//    printf("Nhap b: ");
//    scanf("%d", &b);
//    printf("Nhap c: ");
//    scanf("%d", &c);
//    
//    ptr = &a;
//    *ptr += 10;
//
//    ptr = &b;
//    *ptr += 10;
//
//    ptr = &c;
//    *ptr += 10;
//
//    printf("\nGia tri sau khi cong them 10:\n");
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);
//    printf("c = %d\n", c);
//
//
//	free(ptr);
//    return 0;
//}




//int main() {
//	printf("----- Bai tap B.3 -----\n");
//    int x, y;
//    float A;
//    int *ptrX = &x;
//    int *ptrY = &y;
//
//    printf("Nhap x: ");
//    scanf("%d", ptrX);
//    printf("Nhap y: ");
//    scanf("%d", ptrY);
//
//    A = (7 * pow(*ptrX, 2) + 5 * pow(*ptrY, 3)) / (float)(*ptrX + *ptrY);
//
//    printf("\nGia tri bieu thuc A = (7x^2 + 5y^3)/(x + y) là: %.2f\n", A);
// 
// 	free(ptrX);
// 	free(ptrY);
//    return 0;
//}


//int main() {
//	  printf("----- Bai tap C.1 -----\n");
//    int n;
//    printf("Nhap so diem n: ");
//    scanf("%d", &n);
//
//    Point2D *points = (Point2D *)malloc(n * sizeof(Point2D));
//
//    for (int i = 0; i < n; i++) {
//        printf("Nhap diem A%d (x y): ", i + 1);
//        scanf("%f%f", &points[i].x, &points[i].y);
//    }
//
//    float totalLength = 0;
//    for (int i = 0; i < n - 1; i++) {
//        totalLength += tinhKhoangCachTrongKhongGian2D(points[i], points[i + 1]);
//    }
//
//    printf("Do dai duong gap khuc: %.2f\n", totalLength);
//
//    float maxDist = fabs(points[0].y);
//    printf("Cac diem xa truc hoanh nhat:\n");
//    for (int i = 1; i < n; i++) {
//        if (fabs(points[i].y) > maxDist)
//            maxDist = fabs(points[i].y);
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (fabs(points[i].y) == maxDist)
//            printf("A%d (%.2f, %.2f)\n", i + 1, points[i].x, points[i].y);
//    }
//
//    free(points);
//    return 0;
//}


//int main() {
//	 printf("----- Bai tap C.2 -----\n");
//    int n;
//    printf("Nhap kich thuoc ma tran n x n:  \n");
//    n = nhapSoThucHopLe("n");
//
//    int a[n][n];
//
//    // Nhap ma tran
//    printf("Nhap cac phan tu cua ma tran:\n");
//    for (int i = 0; i < n; i++){
//    	for (int j = 0; j < n; j++) {
//            printf("a[%d][%d] = ", i, j);
//            a[i][j] = nhapSoThucHopLe("");
//        }
//	}
//        
//    // In ma tran
//    printf("\nMa tran da nhap:\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            printf("%5d", a[i][j]);
//        printf("\n");
//    }
//
//    // Tính tong duong chéo phu
//    int tongCheoPhu = 0;
//    for (int i = 0; i < n; i++)
//        tongCheoPhu += a[i][n - 1 - i];
//    printf("\nTong duong cheo phu: %d\n", tongCheoPhu);
//    
//    // Tim gia tri lon nhat
//    int max = a[0][0];
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            if (a[i][j] > max)
//                max = a[i][j];
//    printf("Gia tri lon nhat trong ma tran: %d\n", max);
//
//    // Tinh tich tung cot va tim cot co tich nho nhat
//    long long minTich = 1;
//    int chiSoCotMin = 0;
//    for (int j = 0; j < n; j++) {
//        long long tich = 1;
//        for (int i = 0; i < n; i++)
//            tich *= a[i][j];
//        printf("Tich cot %d: %lld\n", j, tich);
//        if (j == 0 || tich < minTich) {
//            minTich = tich;
//            chiSoCotMin = j;
//        }
//    }
//    printf("Cot co tich nho nhat la cot %d voi tich = %lld\n", chiSoCotMin, minTich);
//
//    // Kiem tra ma tran tam giac
//    int tamGiacTren = 1, tamGiacDuoi = 1;
//
//    for (int i = 1; i < n; i++) // Kiem tra duoi duong cheo chinh
//        for (int j = 0; j < i; j++)
//            if (a[i][j] != 0)
//                tamGiacTren = 0;
//
//    for (int i = 0; i < n - 1; i++) // Kiem tra tren duong cheo chinh
//        for (int j = i + 1; j < n; j++)
//            if (a[i][j] != 0)
//                tamGiacDuoi = 0;
//
//    printf("\nKet luan ve ma tran:\n");
//    if (tamGiacTren)
//        printf("=> Day là ma tran tam giac tren.\n");
//    else if (tamGiacDuoi)
//        printf("=> Day la ma tran tam giac duoi.\n");
//    else
//        printf("=> Day khong phai ma tran tam giac.\n");
//
//    return 0;
//}

//int main() {
//	printf("----- Bai tap C.3 -----\n");
//    int n, x;
//    printf("Nhap so luong phan tu n = ");
//    scanf("%d", &n);
//
//    // Cap phat dong bo nho
//    int *a = (int *)malloc(n * sizeof(int));
//
//    // Kiem tra cap phat
//    if (a == NULL) {
//        printf("Khong du bo nho!\n");
//        return 1;
//    }
//
//    // Nhap mang
//    printf("Nhap mang:\n");
//    nhapMang(a, n);
//
//    // In mang
//    printf("Mang vua nhap: ");
//    inMang(a, n);
//
//    // Tim max
//    int max = timMax(a, n);
//    printf("Phan tu lon nhat trong mang: %d\n", max);
//
//    // Sap xep tang dan
//    sapXepTangDan(a, n);
//    printf("Mang sau khi sap xep tang dan: ");
//    inMang(a, n);
//
//    // Tim mot phan tu x
//    printf("Nhap gia tri can tim x = ");
//    scanf("%d", &x);
//    int viTri = timPhanTu(a, n, x);
//    if (viTri != -1)
//        printf("Tim thay %d tai vi tri %d\n", x, viTri);
//    else
//        printf("Khong tim thay %d trong mang\n", x);
//
//    // Giai phong bo nho
//    free(a);
//
//    return 0;
//}


//int main() {
//	printf("----- Bai tap C.4 -----\n");
//    int n, m;
//    printf("Nhap so dong n: ");
//    scanf("%d", &n);
//    printf("Nhap so cot m: ");
//    scanf("%d", &m);
//
//    // Cap phat dong bo nho cho ma tran
//    int **a = (int **)malloc(n * sizeof(int *));
//    for (int i = 0; i < n; i++)
//        a[i] = (int *)malloc(m * sizeof(int));
//
//    // Nhap ma tran
//    printf("Nhap cac phan tu cua ma tran:\n");
//    nhapMaTran(a, n, m);
//
//    // In ma tran
//    printf("\nMa tran da nhap:\n");
//    inMaTran(a, n, m);
//
//    // Tim max
//    int max = timMaxTrongMaTran(a, n, m);
//    printf("\nPhan tu lon nhat trong ma tran: %d\n", max);
//
//    // Tinh tong duong cheo chinh neu la ma tran vuong
//    if (n == m) {
//        int tong = tongCheoChinh(a, n);
//        printf("Tong cac phan tu tren duong cheo chinh: %d\n", tong);
//    }
//
//    // Tim max cua tung hang
//    printf("\nTim max cua tung hang:\n");
//    timMaxMoiHang(a, n, m);
//
//    // Tinh tong khong am tren moi cot
//    printf("\nTinh tong cac phan tu khong am tren moi cot:\n");
//    tongKhongAmMoiCot(a, n, m);
//
//    // In tam giac tren va duoi neu la ma tran vuong
//    if (n == m) {
//        printf("\n");
//        inTamGiacTren(a, n);
//        printf("\n");
//        inTamGiacDuoi(a, n);
//    }
//
//    // Giai phong bo nho
//    for (int i = 0; i < n; i++)
//        free(a[i]);
//    free(a);
//
//    return 0;
//}


//int main() {
//	printf("----- Bai tap D.1 -----\n");
//    int n;
//    printf("Nhap so luong sinh vien: ");
//    scanf("%d", &n);
//
//    // Cap phat dong danh sach sinh vien
//    SinhVien *ds = (SinhVien *)malloc(n * sizeof(SinhVien));
//
//    // Nhap danh sach
//    nhapDanhSach(ds, n);
//
//    // In danh sach day du
//    printf("\nDANH SACH SINH VIEN:\n");
//    inDanhSach(ds, n);
//
//    // In sinh vien co diem TA >= 9
//    inTiengAnhLonHon9(ds, n);
//
//    // Sap xep theo diem TB va in ra
//    sapXepTheoDiemTB(ds, n);
//    printf("\nDanh sach sau khi sap xep theo diem TB tang dan:\n");
//    inDanhSach(ds, n);
//
//    // In sinh vien co diem TB >= 8
//    inSinhVienGioi(ds, n);
//
//    // Giai phong bo nho
//    free(ds);
//
//    return 0;
//}

//int main() {
//	printf("----- Bai tap D.2 -----\n");
//    int n, soTruong;
//    printf("Nhap so thi sinh: ");
//    scanf("%d", &n);
//    printf("Nhap so truong tham gia: ");
//    scanf("%d", &soTruong);
//
//    ThiSinhOlympic *ds = (ThiSinhOlympic *)malloc(n * sizeof(ThiSinhOlympic));
//
//    nhapDanhSachThiSinh(ds, n);
//
//    // Sap xep giam dan theo diem
//    sapXepTheoDiem(ds, n);
//
//    printf("\nDanh sach thi sinh giam dan theo diem:\n");
//    inDanhSachThiSinh(ds, n);
//
//    // Thong ke tong diem moi truong + tim truong co tong diem cao nhat
//    int truongMax = timTruongMaxDiem(ds, n, soTruong);
//    printf("\nTruong co tong diem cao nhat: Truong %d\n", truongMax);
//
//    // Nhap truong k tu ban phim va tinh tong diem
//    int k;
//    printf("\nNhap ma truong k muon tinh tong diem: ");
//    scanf("%d", &k);
//    float tong = tinhTongDiemTruong(ds, n, k);
//    printf("Tong diem cua truong %d la: %.2f\n", k, tong);
//
//    free(ds);
//    return 0;
//}

//
//int main() {
//	printf("----- Bai tap E.2 -----\n");
//    float *a = NULL;
//    int n = 0;
//    int chon;
//    do {
//        chon = Menu();
//        switch (chon) {
//            case 1:
//                free(a); // giai phong bo nho cu neu co
//                n = Nhap(&a);
//                break;
//            case 2:
//                Xuat(n, a);
//                break;
//            case 3: {
//                float max;
//                if (MaxDuong(n, a, &max))
//                    printf("Max duong: %.2f\n", max);
//                else
//                    printf("Khong co so duong trong day.\n");
//                break;
//            }
//            case 4:
//                if (Fibo(n, a))
//                    printf("Day co tinh chat Fibonacci.\n");
//                else
//                    printf("Day KHONG co tinh chat Fibonacci.\n");
//                break;
//            case 5:
//                printf("Thoat chuong trinh.\n");
//                break;
//            default:
//                printf("Lua chon khong hop le!\n");
//        }
//    } while (chon != 5);
//
//    free(a);
//    return 0;
//}

//int main() {
//	printf("----- Bai tap E.3 -----\n");
//    Node* da_thuc1 = NULL;
//    Node* da_thuc2 = NULL;
//
//    // Da thuc 1: 3x^3 - 4
//    chenNode(&da_thuc1, 3, 3);
//    chenNode(&da_thuc1, -4, 0);
//
//    // Da thuc 2: 2x^2 + 5x + 1
//    chenNode(&da_thuc2, 2, 2);
//    chenNode(&da_thuc2, 5, 1);
//    chenNode(&da_thuc2, 1, 0);
//
//    printf("Da thuc 1: ");
//    inDaThucLinklist(da_thuc1);
//
//    printf("Da thuc 2: ");
//    inDaThucLinklist(da_thuc2);
//
//    double x;
//    printf("\nNhap gia tri x: ");
//    scanf("%lf", &x);
//
//    printf("Gia tri da thuc 1 tai x = %.2lf: %.2lf\n", x, tinhGiaTriDaThuc(da_thuc1, x));
//    printf("Dao ham da thuc 1 tai x = %.2lf: %.2lf\n", x, daoHam(da_thuc1, x));
//
//    Node* tong = congDaThuc(da_thuc1, da_thuc2);
//    printf("\nTong hai da thuc: ");
//    inDaThucLinklist(tong);
//
//    giaiPhong(da_thuc1);
//    giaiPhong(da_thuc2);
//    giaiPhong(tong);
//
//    return 0;
//}

//int main() {
//	printf("----- Bai tap E.4 -----\n");
//    GiangVien* danhSach = NULL;
//    int n;
//
//    printf("Nhap so giang vien: ");
//    scanf("%d", &n);
//    nhapDanhSachGiangVien(&danhSach, n);
//
//    inDanhSachGiangVien(danhSach);
//    timGiangVienThS(danhSach);
//    tinhTienGiangDay(danhSach);
//
//    sapXepTheoSoTiet(&danhSach);
//    printf("\n=== DANH SACH SAU KHI SAP XEP GIAM DAN THEO SO TIET ===\n");
//    inDanhSachGiangVien(danhSach);
//
//    giaiPhongDSGiangVien(danhSach);
//    return 0;
//}


//int main() {
//	printf("----- Bai tap E.5 -----\n");
//    Sach* danhSach = NULL;
//    int n;
//
//    printf("Nhap so luong sach: ");
//    scanf("%d", &n);
//    nhapDanhSachE5(&danhSach, n);
//
//    inDanhSachE5(danhSach);
//
//    xoaSach2010E5(&danhSach);
//    printf("\n=== DANH SACH SAU KHI XOA SACH NAM 2010 ===\n");
//    inDanhSachE5(danhSach);
//
//    thongKeTheoLoaiE5(danhSach);
//
//    sapXepTheoSoLuongE5(&danhSach);
//    printf("\n=== DANH SACH SAU KHI SAP XEP TANG DAN THEO SO LUONG ===\n");
//    inDanhSachE5(danhSach);
//
//    giaiPhongE5(danhSach);
//    return 0;
//}


//// file.txt
//int main (){
//	printf("---- BAI TAP F.1 ---- \n");
//	
//	char fileName[100];
//	FILE *file;
//	char ch;
//	
//	char cwd[1024];
//	getcwd(cwd, sizeof(cwd));
//	printf("Thu muc hien tai: %s\n", cwd);
//	
//	printf("Xin vui long nhap ten tap tin :");
//	scanf("%s", fileName);
//	printf(fileName);
//	
//	file = fopen(fileName, "r");
//	
//	if(file == NULL){
//		printf("Khong the mo tap tin\n");
//        return 1;
//	}
//	
//	printf("Noi dung tap tin la \n");
//	
//	while((ch = fgetc(file)) != EOF){
//		putchar(ch);
//	}
//	
//	fclose(file);
//	return 0;
//}

//int main() {
//	printf("---- BAI TAP F.2 ---- \n");
//    HangHoa ds[MAX];
//    int n;
//
//    nhapDanhSachF2(ds, &n);
//
//    xuatDanhSachRaFileF2(ds, n, "hanghoa.txt");
//
//    int tong = tinhTongSoLuongF2(ds, n);
//    printf("Tong so luong tat ca hang hoa: %d\n", tong);
//
//    char tenCanTim[100];
//    printf("Nhap ten hang can tim: ");
//    getchar(); // xoa \n
//    fgets(tenCanTim, sizeof(tenCanTim), stdin);
//    tenCanTim[strcspn(tenCanTim, "\n")] = 0;
//    timKiemF2(ds, n, tenCanTim);
//
//    sapXepVaGhiNhiPhanF2(ds, n, "hanghoa.dat");
//
//    printf("Da ghi danh sach da sap xep vao file nhi phan 'hanghoa.dat'\n");
//    return 0;
//}

//int main() {
//	printf("---- BAI TAP F.3 ---- \n");
//    float **matrix = NULL;
//    int n = 0, m = 0;
//    int luaChon;
//
//    do {
//        printf("\n===== MENU =====\n");
//        printf("1. Nhap ma tran tu ban phim\n");
//        printf("2. Nhap ma tran tu file van ban\n");
//        printf("3. Ghi ma tran ra file van ban\n");
//        printf("4. Ghi ma tran ra file nhi phan\n");
//        printf("5. Doc ma tran tu file nhi phan\n");
//        printf("6. In ma tran hien tai\n");
//        printf("0. Thoat\n");
//        printf("Lua chon: ");
//        scanf("%d", &luaChon);
//
//        switch (luaChon) {
//            case 1:
//                giaiPhongF3(matrix, n);
//                nhapTuBanPhimF3(&matrix, &n, &m);
//                break;
//            case 2:
//                giaiPhongF3(matrix, n);
//                nhapTuFileVanBanF3("matran.txt", &matrix, &n, &m);
//                break;
//            case 3:
//                xuatRaFileVanBanF3("matran_out.txt", matrix, n, m);
//                printf("Da ghi ra file van ban.\n");
//                break;
//            case 4:
//                ghiFileNhiPhanF3("matran.bin", matrix, n, m);
//                printf("Da ghi ra file nhi phan.\n");
//                break;
//            case 5:
//                giaiPhongF3(matrix, n);
//                docFileNhiPhanF3("matran.bin", &matrix, &n, &m);
//                printf("Da doc tu file nhi phan.\n");
//                break;
//            case 6:
//                inMaTran(matrix, n, m);
//                break;
//            case 0:
//                printf("Thoat chuong trinh.\n");
//                break;
//            default:
//                printf("Lua chon khong hop le.\n");
//        }
//    } while (luaChon != 0);
//
//    giaiPhongF3(matrix, n);
//    return 0;
//}

int main() {
	printf("---- BAI TAP F.4 ---- \n");
    ThiSinh *ds = NULL;
    int n, chon;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap danh sach tu ban phim\n");
        printf("2. In danh sach\n");
        printf("3. Ghi file nhi phan\n");
        printf("4. Ghi file van ban\n");
        printf("5. Doc file nhi phan\n");
        printf("6. Doc file van ban\n");
        printf("7. Tim diem toan cao nhat\n");
        printf("8. Xoa diem ly thap nhat\n");
        printf("0. Thoat\n");
        printf("Lua chon: "); scanf("%d", &chon);

        switch (chon) {
            case 1:
                printf("Nhap so thi sinh: ");
                scanf("%d", &n);
                nhapDanhSachF4(&ds, n);
                break;
            case 2:
                inDanhSachF4(ds);
                break;
            case 3:
                ghiNhiPhanF4(ds, "thisinhF4.bin");
                break;
            case 4:
                ghiVanBanF4(ds, "thisinhF4.txt");
                break;
            case 5:
                docNhiPhanF4(&ds, "thisinhF4.bin");
                break;
            case 6:
                docVanBanF4(&ds, "thisinhF4.txt");
                break;
            case 7:
                timToanMaxF4(ds);
                break;
            case 8:
                xoaLyMinF4(&ds);
                break;
        }
    } while (chon != 0);

    return 0;
}





 
