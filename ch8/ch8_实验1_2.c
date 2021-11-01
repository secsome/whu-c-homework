#include <stdio.h>

void filter(float*, float*, float*, float*, float*);

int main()
{
    float x, y, z, max, min;
    float* px = &x, * py = &y, * pz = &z;
    
    printf("请输入三个数：");
    scanf("%f%f%f", px, py, pz);
    
    filter(px, py, pz, &max, &min);
    
    printf("最大数：%f\n最小数：%f\n", max, min);
    
    return 0;
}

float Min(float a, float b)
{
    return a < b ? a : b;
}

float Max(float a, float b)
{
    return a > b ? a : b;
}

void filter(float* p1, float* p2, float* p3, float* m, float* n)
{
    *m = Max(Max(*p1, *p2), *p3);
    *n = Min(Min(*p1, *p2), *p3);
}