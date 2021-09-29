#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);
    printf("%lf", x >= 0 ? 3 * x + 6 : -x * x + 2 * x - 8);
    return 0;
}