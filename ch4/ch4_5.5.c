#include <stdio.h>

int main()
{
    int in;
    double result;
    scanf("%d", &in);

    if (in <= 100000)
        result = in * 0.1;
    else if (in <= 200000)
        result = 10000 + (in - 100000) * 0.075;
    else if (in <= 400000)
        result = 17500 + (in - 200000) * 0.05;
    else if (in <= 600000)
        result = 27500 + (in - 400000) * 0.03;
    else if (in <= 10000000)
        result = 33500 + (in - 600000) * 0.015;
    else
        result = 39500 + (in - 1000000) * 0.01;

    printf("%lf", result);

    return 0;
}