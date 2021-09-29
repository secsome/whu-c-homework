#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%lf%lf", &x, &y);
    double result;
    if (x > 0)
    {
        if (y > 0)
            result = log(x) + log(y);
        else if (y < 0)
            result = tan(x + y);
    }
    else if (x < 0)
    {
        if (y > 0)
            result = sin(x) + cos(y);
        else if(y<0)
            result = exp(2 * x) + exp(3 * y);
    }
    printf("%lf", result);

    return 0;
}