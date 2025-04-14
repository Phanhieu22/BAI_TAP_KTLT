#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#define MAX_DEGREE 100

typedef struct {
    int degree;
    float coef[MAX_DEGREE + 1];
} Polynomial;

void nhapDaThuc(Polynomial p);
void inDaThuc(Polynomial p);
float tinhGiaTri(Polynomial p, float x);
Polynomial tongDaThuc(Polynomial a, Polynomial b);

#endif

