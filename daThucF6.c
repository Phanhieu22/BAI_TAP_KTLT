#include <stdio.h>
#include <stdlib.h>
#include "dathucF6.h"

void docDaThucTuFileF6(const char *filename, float **a, int *n, float **b, int *m) {
    FILE *f = fopen(filename, "r");
    if (!f) return;

    fscanf(f, "%d %d", n, m);
    *a = (float *)malloc((*n + 1) * sizeof(float));
    *b = (float *)malloc((*m + 1) * sizeof(float));

    for (int i = 0; i <= *n; i++) fscanf(f, "%f", &(*a)[i]);
    for (int i = 0; i <= *m; i++) fscanf(f, "%f", &(*b)[i]);

    fclose(f);
}

void inDaThucF6(const float *h, int bac, const char *ten) {
    printf("%s(x) = ", ten);
    for (int i = 0; i <= bac; i++) {
        printf("%.2f", h[i]);
        if (i > 0) printf("x^%d", i);
        if (i < bac) printf(" + ");
    }
    printf("\n");
}

float tinhGiaTriDaThucF6(const float *h, int bac, float x) {
    float s = 0;
    float mu = 1;
    for (int i = 0; i <= bac; i++) {
        s += h[i] * mu;
        mu *= x;
    }
    return s;
}

void congDaThucF6(const float *a, int n, const float *b, int m, float **s, int *p) {
    *p = (n > m) ? n : m;
    *s = (float *)malloc((*p + 1) * sizeof(float));

    for (int i = 0; i <= *p; i++) {
        float ai = (i <= n) ? a[i] : 0;
        float bi = (i <= m) ? b[i] : 0;
        (*s)[i] = ai + bi;
    }
}

