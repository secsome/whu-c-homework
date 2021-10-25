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

int getdata()
{
    int n;
    do
    {
        printf("Please input a valid number: ");
        scanf("%d", &n);
    } while (n < 6 || n % 2 != 0);
    return n;
}

void goldbach(int n)
{
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
}

int main()
{
    int n;
    do
    {
        n = getdata();
        goldbach(n);
        printf("Do you want to continue? (Y/N)\n");
        char ch;
        do
        {
            ch = getchar();
        }
        while (ch != 'Y' && ch != 'N');
        if (ch == 'Y')
            continue;
        else
            break;
    } while (1);

    return 0;
}