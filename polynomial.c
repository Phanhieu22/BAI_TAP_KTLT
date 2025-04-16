#include <stdio.h>
#include <math.h>
#include "polynomial.h"
#include "number.h"

Polynomial nhapDaThuc(Polynomial p) {
    p.degree = nhapSoThucHopLe("Nhap bac cua da thuc: ");
    for (int i = p.degree; i >= 0; i--) {
    	printf("Nhap he so cua x^%d:", i);
        p.coef[i] = nhapFloatHopLe("");
    }
    
    return p;
}

void inDaThuc(Polynomial p) {
	printf("bac da thuc =  %d", p.degree);
    for (int i = p.degree; i >= 0; i--) {
        if (p.coef[i] != 0) {
            // In dau + hoac -
            if (i != p.degree) {
                if (p.coef[i] > 0)
                    printf(" + ");
                else
                    printf(" - ");
            } else if (p.coef[i] < 0) {
                printf("-"); // d?u âm d?u tiên không c?n cách
            }

            float absCoef = fabs(p.coef[i]);

            // Chi in he so khac 1 hoac neu bang 0
            if (!(absCoef == 1 && i > 0))
                printf("%.2f", absCoef);

            if (i > 0)
                printf("x");
            if (i > 1)
                printf("^%d", i);
        }
    }
    printf("\n");
}


	float tinhGiaTri(Polynomial p, float x) {
	    float result = 0;
	    for (int i = 0; i <= p.degree; i++) {
	        result += p.coef[i] * pow(x, i);
	    }
	    return result;
	}

Polynomial tongDaThuc(Polynomial a, Polynomial b) {
    Polynomial tong;
    tong.degree = (a.degree > b.degree) ? a.degree : b.degree;

    for (int i = 0; i <= tong.degree; i++) {
        tong.coef[i] = a.coef[i] + b.coef[i];
    }

    return tong;
}

