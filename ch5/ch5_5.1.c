#include <stdio.h>

int main()
{
    double sum = 0.0;

    for (int i = 1; i <= 100; ++i)
        sum += i;
    for (int i = 1; i <= 50; ++i)
        sum += i * i;
    for (int i = 1; i <= 10; ++i)
        sum += 1.0 / i;

    printf("%lf", sum);

    return 0;
}