#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double s = 0.0;
    double h = 1.0 / n;
    double x = 0.0;
    for (int i = 0; i < n; ++i, x += h)
        s += h*(4.0 / (1 + x * x));

    printf("s=%lf\n", s);

    return 0;
}