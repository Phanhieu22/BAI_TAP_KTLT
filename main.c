#include <stdio.h>
#include "helloWorld.h"
#include "polynomial.h"
#include "number.h"
#include "circle.h"

/* B�I T?P A.1
1. H�y t? ch?c chuong tr�nh th�nh c�c file .h v� .c, file main.c d? th?c hi?n 
c�c h�m sau:
- Vi?t c�c h�m t�nh di?n t�ch v� chu vi h�nh tr�n
- Vi?t h�m ki?m tra 1 s? c� ph?i l� s? nguy�n t? hay kh�ng
- Vi?t h�m t�nh kho?ng c�ch gi?a 2 di?m trong kh�ng gian 3 chi?u
- Vi?t h�m t�nh Xn
s? d?ng thu?t to�n d? quy
*/

int main(){
    float radius, x1, y1, z1, x2, y2, z2;
    Point point1, point2;
    int n;
    printf("Nhap ban kinh hinh tron: ");
    radius = nhapBanKinh();
    printf("Chu vi hinh tron: %.2f\n", chuViHinhTron(radius));
    printf("Dien tich hinh tron: %.2f\n", dienTichHinhTron(radius));

    // printf("Nhap so nguyen de kiem tra: ");
    // scanf("%d", &n);
    // if (laSoNguyenTo(n))
    //     printf("%d la so nguyen to.\n", n);
    // else
    //     printf("%d khong phai la so nguyen to.\n", n);

    printf("Trong khong gian 3D xin moi ban nhap toa do diem 1:\n");
    point1 = nhapToaDoDiem();
    
    printf("Trong khong gian 3D xin moi ban nhap toa do diem 2:\n");
    point2 = nhapToaDoDiem();
    printf("Khoang cach giua 2 diem: %.2f\n", tinhKhoangCachTrongKhongGian3D(point1, point2));

    printf("Nhap n de tinh X^n: \n");
    n = nhapFloatHopLe("n = ");
    printf("X^%d = %.0f\n", n, tinhXn(n));

    return 0;
}

/*
2. X�y dung cac ham:
- Nhap v�o b?c c?a m?t da th?c v� c�c h? s? c?a da th?c b?c m
- In da th?c b?c m
- T�nh gi� tr? c?a da th?c t?i s? th?c d
- T�nh t?ng 2 da th?c
?ng d?ng c�c h�m tr�n x�y d?ng h�m main nh?p v�o 2 da th?c Pm v� 
Qn. In 2 da th?c v?a nh?p. T�nh t?ng R=P+Q. T�m gi� tr? c?a P(x1) + Q(x2) 
v?i x1, x2 nh?p v�o t? b�n ph�m.
*/
// ------------ B�I T?P A.2 ------------
// int main(){
//     Polynomial p1, p2, sum;
//     float x;

//     printf("Nhap da thuc thu nhat:\n");
//     nhapDaThuc(&p1);

//     printf("Nhap da thuc thu hai:\n");
//     nhapDaThuc(&p2);

//     printf("\nDa thuc 1: ");
//     inDaThuc(p1);

//     printf("Da thuc 2: ");
//     inDaThuc(p2);

//     sum = tongDaThuc(p1, p2);
//     printf("Tong 2 da thuc: ");
//     inDaThuc(sum);

//     printf("\nNhap gia tri x de tinh gia tri da thuc tong: ");
//     scanf("%f", &x);

//     printf("Gia tri da thuc tong tai x = %.2f la: %.2f\n", x, tinhGiaTri(sum, x));

//     return 0;
// }
