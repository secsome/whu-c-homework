#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%lf%lf", &x, &y);

    printf("%lf\n", sin(fabs(x) + fabs(y)) / sqrt(cos(fabs(x + y))));

    return 0;
}