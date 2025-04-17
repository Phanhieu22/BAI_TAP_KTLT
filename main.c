#include <stdio.h>
#include <math.h>
#include "helloWorld.h"
#include "polynomial.h"
#include "number.h"
#include "circle.h"
#include "array.h"

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






 
