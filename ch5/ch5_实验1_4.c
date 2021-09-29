#include <stdio.h>

int main()
{
    int i, fib, fib1, fib2;
    fib1 = fib2 = 1;
    printf("%d %d ", fib1, fib2);
    for (int i = 3; i <= 12; ++i)
    {
        fib = fib1 + fib2;
        printf("%d ", fib);
        fib1 = fib2;
        fib2 = fib;
    }
    printf("\n");
    return 0;
}