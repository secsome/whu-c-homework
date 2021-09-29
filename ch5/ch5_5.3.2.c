#include <stdio.h>

int main()
{
    double frac = 1.0, sum = 0.0;
    int i = 1;
    while (frac >= 1e-6)
    {
        sum += frac;
        frac /= i++;
    }
    printf("%lf", sum);
    return 0;
}