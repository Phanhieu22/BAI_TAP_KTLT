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
	printf("bac da thuc =  %d \n", p.degree);
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
    printf("---------------------\n");
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

// Tao node moi
Node* taoNode(int he_so, int mu) {
    Node* moi = (Node*)malloc(sizeof(Node));
    moi->he_so = he_so;
    moi->mu = mu;
    moi->ke_tiep = NULL;
    return moi;
}

// Them node vao da thuc theo thu tu giam dan cua mu
void chenNode(Node** dau, int he_so, int mu) {
    if (he_so == 0) return;

    Node* moi = taoNode(he_so, mu);

    // Chen vao dau neu danh sach rong hoac mu lon hon
    if (*dau == NULL || (*dau)->mu < mu) {
        moi->ke_tiep = *dau;
        *dau = moi;
    } else {
        Node* hien_tai = *dau;
        Node* truoc = NULL;

        while (hien_tai && hien_tai->mu > mu) {
            truoc = hien_tai;
            hien_tai = hien_tai->ke_tiep;
        }

        if (hien_tai && hien_tai->mu == mu) {
            hien_tai->he_so += he_so;
            free(moi);

            // Xoa node neu he so = 0
            if (hien_tai->he_so == 0) {
                if (truoc)
                    truoc->ke_tiep = hien_tai->ke_tiep;
                else
                    *dau = hien_tai->ke_tiep;
                free(hien_tai);
            }
        } else {
            moi->ke_tiep = hien_tai;
            if (truoc)
                truoc->ke_tiep = moi;
            else
                *dau = moi;
        }
    }
}

// Tinh gia tri cua da thuc tai x
double tinhGiaTriDaThuc(Node* da_thuc, double x) {
    double ket_qua = 0;
    while (da_thuc) {
        ket_qua += da_thuc->he_so * pow(x, da_thuc->mu);
        da_thuc = da_thuc->ke_tiep;
    }
    return ket_qua;
}

// Tinh dao ham cua da thuc tai x
double daoHam(Node* da_thuc, double x) {
    double ket_qua = 0;
    while (da_thuc) {
        if (da_thuc->mu != 0)
            ket_qua += da_thuc->he_so * da_thuc->mu * pow(x, da_thuc->mu - 1);
        da_thuc = da_thuc->ke_tiep;
    }
    return ket_qua;
}

// Cong hai da thuc
Node* congDaThuc(Node* dt1, Node* dt2) {
    Node* tong = NULL;
    while (dt1) {
        chenNode(&tong, dt1->he_so, dt1->mu);
        dt1 = dt1->ke_tiep;
    }
    while (dt2) {
        chenNode(&tong, dt2->he_so, dt2->mu);
        dt2 = dt2->ke_tiep;
    }
    return tong;
}

// In da thuc ra man hinh
void inDaThucLinklist(Node* da_thuc) {
    while (da_thuc) {
        printf("%dx^%d", da_thuc->he_so, da_thuc->mu);
        if (da_thuc->ke_tiep && da_thuc->ke_tiep->he_so > 0)
            printf(" + ");
        else if (da_thuc->ke_tiep && da_thuc->ke_tiep->he_so < 0)
            printf(" ");
        da_thuc = da_thuc->ke_tiep;
    }
    printf("\n");
}

// Giai phong bo nho
void giaiPhong(Node* da_thuc) {
    while (da_thuc) {
        Node* tam = da_thuc;
        da_thuc = da_thuc->ke_tiep;
        free(tam);
    }
}

