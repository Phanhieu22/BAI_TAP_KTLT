#ifndef DATHUCF6_H
#define DATHUCF6_H

void docDaThucTuFileF6(const char *filename, float **a, int *n, float **b, int *m);
void inDaThucF6(const float *h, int bac, const char *ten);
float tinhGiaTriDaThucF6(const float *h, int bac, float x);
void congDaThucF6(const float *a, int n, const float *b, int m, float **s, int *p);

#endif

