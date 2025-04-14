#include <stdio.h>
#include "helloWorld.h"
#include "polynomial.h"
#include "number.h"
#include "circle.h"


/* BAI TAP A.1 */
/*
int main(){
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
 int main(){
 	printf("----- Bai tap A.2 -----");
     Polynomial p1, p2, sum;
     float x;

     printf("Nhap da thuc thu nhat:\n");
     nhapDaThuc(&p1);

     printf("Nhap da thuc thu hai:\n");
     nhapDaThuc(&p2);

     printf("\nDa thuc 1: ");
     inDaThuc(p1);

     printf("Da thuc 2: ");
     inDaThuc(p2);

     sum = tongDaThuc(p1, p2);
     printf("Tong 2 da thuc: ");
     inDaThuc(sum);

     printf("\nNhap gia tri x de tinh gia tri da thuc tong: ");
     scanf("%f", &x);

     printf("Gia tri da thuc tong tai x = %.2f la: %.2f\n", x, tinhGiaTri(sum, x));

     return 0;
 }
