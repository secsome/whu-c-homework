#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("������ a,b,c��ֵ��\n");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    double s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area = %f\n", area);
    return;
}