#include <stdio.h>
#include "helloWorld.h"
#include "polynomial.h"
#include "number.h"
#include "circle.h"


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
