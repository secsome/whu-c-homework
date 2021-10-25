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

long long getdatarange()
{
    int a, b;
    do
    {
        printf("Please input a range [a, b]: ");
        scanf("%d%d", &a, &b);
    } 
    while (a < 6 || b < 6 || a > b);
    return (long long)a << 32 | b;
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
        printf("%d has no solution!\n", n);
    else
        printf("%d can be divided into %d + %d\n", n, i, n - i);
}

void goldbachrange(long long src)
{
    int a = ((src >> 32) & 0xFFFFFFFF);
    int b = (src & 0xFFFFFFFF);
    if (a % 2 == 1)
        ++a;
    for (int i = a; i <= b; i += 2)
        goldbach(i);
}

int verificationtype()
{
    int op;
    do
    {
        printf(
            "Select your mode:\n"
            "1. Single input\n"
            "2. Ranged input\n"
        );

        scanf("%d", &op);
    }     
    while (op != 1 && op != 2);
    return op;
}

int main()
{
    do
    {
        if (verificationtype() == 1)
        {
            int n = getdata();
            goldbach(n);
        }
        else
        {
            long long src = getdatarange();
            goldbachrange(src);
        }
        printf("Do you want to continue? (Y/N)\n");
        char ch;
        do
        {
            ch = getchar();
        }         while (ch != 'Y' && ch != 'N');
        if (ch == 'Y')
            continue;
        else
            break;
    } while (1);

    return 0;
}