#include <stdio.h>

int check(int x)
{
    int a, b, c;
    c = x % 10;
    b = x / 10 % 10;
    a = x / 100;
    return a * a * a + b * b * b + c * c * c == x;
}

int main()
{
    for(int i = 100; i < 1000; ++i)
    {
        if (check(i))
            printf("%d\n", i);
    }
    return 0;
}