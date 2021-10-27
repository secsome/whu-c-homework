#include <stdio.h>

int gcd(int a, int b)
{
    int t;
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    while (b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("%d\n", lcm(lcm(lcm(lcm(a, b), c), d), e));
    return 0;
}