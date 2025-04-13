#include <stdio.h>
#include "helloWorld.h"
#include "polynomial.h"
#include "number.h"
#include "circle.h"

/* BÀI T?P A.1
1. Hãy t? ch?c chuong trình thành các file .h và .c, file main.c d? th?c hi?n 
các hàm sau:
- Vi?t các hàm tính di?n tích và chu vi hình tròn
- Vi?t hàm ki?m tra 1 s? có ph?i là s? nguyên t? hay không
- Vi?t hàm tính kho?ng cách gi?a 2 di?m trong không gian 3 chi?u
- Vi?t hàm tính Xn
s? d?ng thu?t toán d? quy
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
2. Xây dung cac ham:
- Nhap vào b?c c?a m?t da th?c và các h? s? c?a da th?c b?c m
- In da th?c b?c m
- Tính giá tr? c?a da th?c t?i s? th?c d
- Tính t?ng 2 da th?c
?ng d?ng các hàm trên xây d?ng hàm main nh?p vào 2 da th?c Pm và 
Qn. In 2 da th?c v?a nh?p. Tính t?ng R=P+Q. Tìm giá tr? c?a P(x1) + Q(x2) 
v?i x1, x2 nh?p vào t? bàn phím.
*/
// ------------ BÀI T?P A.2 ------------
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
