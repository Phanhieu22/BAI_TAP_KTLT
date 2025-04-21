#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#define MAX_DEGREE 100

typedef struct {
    int degree;
    float coef[MAX_DEGREE + 1];
} Polynomial;

Polynomial nhapDaThuc(Polynomial p);

void inDaThuc(Polynomial p);

float tinhGiaTri(Polynomial p, float x);

Polynomial tongDaThuc(Polynomial a, Polynomial b);

typedef struct Node {
    int he_so; // he so
    int mu;    // mu
    struct Node* ke_tiep;
} Node;

Node* taoNode(int he_so, int mu);

void chenNode(Node** dau, int he_so, int mu);

double tinhGiaTriDaThuc(Node* da_thuc, double x);

double daoHam(Node* da_thuc, double x);

Node* congDaThuc(Node* dt1, Node* dt2);

void inDaThucLinklist(Node* da_thuc);

void giaiPhong(Node* da_thuc);

#endif

