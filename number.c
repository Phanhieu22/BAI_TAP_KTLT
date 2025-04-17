#include <stdio.h>
#include "number.h"
#include <math.h>
#include <stdbool.h>

// Kiem tra la so nguyen to
bool laSoNguyenTo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Tinh khoang cach giua hai diem trong khong gian (x1, y1, z1) và (x2, y2, z2)
float tinhKhoangCachTrongKhongGian3D(Point point1, Point point2) {
    return sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2) + pow(point2.z - point1.z, 2));
}

float tinhKhoangCachTrongKhongGian2D(Point2D a, Point2D b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

Point nhapToaDoDiem(){
	 Point p;
	 p.x = nhapFloatHopLe("X");
	 p.y = nhapFloatHopLe("Y");
	 p.z  = nhapFloatHopLe("Z");
	return p;
}

// Tính Xn = 2^n
float tinhXn(int n) {
    if (n == 0) return 1;
    return 2 * tinhXn(n - 1);
}
float nhapFloatHopLe(const char *tenToaDo) {
    float value;
    int status;

    do {
        printf("%s: ", tenToaDo);
        status = scanf("%f", &value);

        if (status != 1) {
            printf("? Dau vao khong hop le. Hay nhap mot so thuc!\n");
            while (getchar() != '\n'); // Xoa bo dem
        }
    } while (status != 1);

    return value;
}

int nhapSoThucHopLe(const char *huongdan){
	int value;
	int status;
	
	do {
        printf("%s: ", huongdan);
        status = scanf("%d", &value);

        if (status != 1) {
            printf("? Dau vao khong hop le. Hay nhap mot so tu nhien!\n");
            while (getchar() != '\n'); // Xoa bo dem
        }
    } while (status != 1);
    
    return value;
}

