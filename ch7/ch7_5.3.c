#include <stdio.h>
#include <math.h>

int Is_Complete_Number(int n)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            sum += i + n / i;
    }
    return sum == n;
}

int main()
{
    for (int i = 4; i <= 30000; ++i)
    {
        if (Is_Complete_Number(i))
            printf("%d\n", i);
    }
    return 0;
}