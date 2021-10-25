#include <stdio.h>
#include <math.h>

double f(double x)
{
    return x * x + 6 * x - 7;
}

int main()
{
    double x;
    printf("%lf\n", f(3));
    scanf("%lf", &x);
    printf("%lf\n", f(x + 8));
    scanf("%lf", &x);
    printf("%lf\n", f(cos(x)));
    return 0;
}