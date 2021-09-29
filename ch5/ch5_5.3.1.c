#include <stdio.h>

int main()
{
    double sum = 1.0, frac = 1.0;
    for (int i = 1; i < 50; ++i, frac /= i)
        sum += frac;
    printf("%lf\n", sum);
    return 0;
}