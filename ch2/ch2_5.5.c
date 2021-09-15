#include <stdio.h>
#include <math.h>

int main()
{
    double a, r;
    int n;
    scanf("%lf%lf%d", &a, &r, &n);
    double I = r + 1;

    double In = pow(I, n);
    printf("%lf\n", a * (In - 1) / r * In);

    return 0;
}