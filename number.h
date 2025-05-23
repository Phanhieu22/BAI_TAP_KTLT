#ifndef NUMBER_H
#define NUMBER_H
#include <stdbool.h>

typedef struct {
    float x;
    float y;
    float z;
} Point;

typedef struct {
    float x, y;
} Point2D;

float tinhKhoangCachTrongKhongGian2D(Point2D a, Point2D b);

bool laSoNguyenTo(int n);

float tinhKhoangCachTrongKhongGian3D(Point point1, Point point2);

float tinhXn(int n);

Point nhapToaDoDiem();

float nhapFloatHopLe(const char *tenToaDo);

int nhapSoThucHopLe(const char *huongdan);

#endif	
