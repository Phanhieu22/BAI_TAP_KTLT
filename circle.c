#include <stdio.h>
#include <math.h>
#include "circle.h"


#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

float chuViHinhTron(float radius) {
    return 2 * M_PI * radius;
}

float dienTichHinhTron(float radius) {
    return M_PI * radius * radius;
}

float nhapBanKinh() {
	float r;
	int status;

	do {
    printf("Nhap ban kinh hinh tron: ");
        status = scanf("%f", &r);

        // Xóa buffer n?u nh?p sai
        if (status != 1) {
            printf("? Dau vao khong hop le. Hay nhap so thuc!\n");
            while (getchar() != '\n'); // Xóa input buffer
        } else if (r <= 0) {
            printf("? Ban kinh phai lon hon 0!\n");
        }

    } while (status != 1 || r <= 0);

    return r;
}


