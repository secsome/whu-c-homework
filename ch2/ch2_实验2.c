#include <stdio.h>

int main()
{
    int a, b;
    double x, y;
    a = 7;
    x = 2.5;
    y = 4.7;
    printf("%lf\n", x + a % 3 * (int)(x + y) % 2 / 4);

    a = 2;
    b = 5;
    x = 3.5;
    y = 2.5;
    printf("%f\n", (float)(a + b) / 2 + (int)x % (int)y);

    return 0;
}