#include <stdio.h>

#define PI 3.1415926535898

int main()
{
    double R, r;
    scanf("%lf %lf", &R, &r);
    printf("%lf\n", PI * (R * R - r * r));

    return 0;
}