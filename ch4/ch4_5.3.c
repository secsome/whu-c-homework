#include <stdio.h>

int main()
{
    int count, important;
    scanf("%d%d", &count, &important);

    if (count < 10)
        count = 10;
    double result = 0.75 * count;
    if (important)
        result = (result + 0.75) * 2;

    printf("%lf", result);

    return 0;
}