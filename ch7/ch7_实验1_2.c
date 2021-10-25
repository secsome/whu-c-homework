#include <stdio.h>
#include <math.h>

int isprime(int x)
{
    for (int i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    }
    while (n < 6 || n % 2 != 0);

    int i = 3;
    for (; i <= n / 2; ++i)
    {
        if (isprime(i) && isprime(n - i))
            break;
    }
    if (i == n / 2 + 1)
        printf("No solution!\n");
    else
        printf("%d can be divided into %d + %d\n", n, i, n - i);

    return 0;
}