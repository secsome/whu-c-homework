#include <stdio.h>

#define PI 3.1415926

int main()
{
    double de, ra;
    printf("\n������һ���Ƕȣ�");
    scanf("%lf", &de);

    ra = de / 180.0 * PI;
    printf("%f�Ƚ�ת��Ϊ�����ǣ�%f\n", de, ra);

    return 0;
}