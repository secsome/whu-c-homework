#include <stdio.h>

int main()
{
    for (int m = 2, sum = 0; m <= 1000; ++m, sum = 0)
    {
        for (int i = 1; i <= m / 2; (sum += m % i == 0 ? i : 0), i++);
        if (sum == m)
            printf("%d ", m);
    }
    return 0;
}