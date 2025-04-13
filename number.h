#ifndef NUMBER_H
#define NUMBER_H
#include <stdbool.h>

typedef struct {
    float x;
    float y;
    float z;
} Point;

bool laSoNguyenTo(int n);

float tinhKhoangCachTrongKhongGian3D(Point point1, Point point2);

float tinhXn(int n);

Point nhapToaDoDiem();

float nhapFloatHopLe(const char *tenToaDo);

#endif	
